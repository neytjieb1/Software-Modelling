###Task 1

#### GDB

1. 
        g++ -g -o marks marks.cpp
2.
        gdb ./marks
    
3. 
        (gdb) run
         
         The error produced is an arithmetic exception.
         The error occurs at line 21.
         The values were:
          a = 2
          b = 0
      
4. running "list" gives the following output: 
        
        (gdb) list
        16          return 0;
        17      }
        18      
        19      int improve(int a, int b)
        20      {
        21          return ((double)(a / b)) * 100;
        22      }

5. I use the backtrace command as follows:
    
        (gdb) bt
        #0  0x000055555555483d in improve (a=-2, b=0) at marks.cpp:21
        #1  0x000055555555481a in main () at marks.cpp:15

    This shows that the error first occurs when the function improve is 
    called in l.15 in the main program.
    
6.
        (gdb) up
        #1  0x000055555555481a in main () at marks.cpp:15
        15          cout << improve(mark, highest);

7. 
        (gdb) list
        10      
        11      int main() {
        12          int mark = 59, highest = 87;
        13          cout << improve(mark, highest);
        14          mark = -2; highest = 0;
        15          cout << improve(mark, highest);
        16          return 0;
        17      }
        18      
        19      int improve(int a, int b)

The main program is now printed, but not the entirety of the improve function
    
8. 
        (gdb) print highest
        $1 = 0

9. The crash occurred because of an attempt to divide by 0.
        

###Valgrind

1. g++ -g -o capture capture.cpp
        
2. valgrind --leak-check=yes ./capture
        
3. The process id on my output is 20706 as can be seen in the partial output below:
    
        ==20706== Memcheck, a memory error detector
        ==20706== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
        ==20706== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
        ==20706== Command: ./capture
           
4. 
        Invalid write of size 4
        
5. The stack trace informs where the error occured by showing where there was an attempt made to write to a variable.

6. 40 bytes have been lost as the memory allocated dynamically by the statement
        int *marks = new int[10]; 
    was never deallocated using the command 
        delete marks;
        
7. The mistake can be fixed by changing the return type of the function return type to int* so that a handle to the array is passed back to the client. 
Afterwards, I would also include a statement as the one in (6) to deallocated the dynamically allocated memory.
        