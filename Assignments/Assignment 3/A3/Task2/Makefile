main: main.o Prisoner.o BorderGuard.o PrisonArea.o Observers.o Subject.o Human.o
	g++ -o main main.o Prisoner.o BorderGuard.o PrisonArea.o Observers.o Subject.o Human.o

main.o: main.cpp Prisoner.o BorderGuard.o PrisonArea.h Observers.o  Subject.o Human.o
	g++ -c main.cpp

Human.o: Human.h Human.cpp Human.cpp
	g++ -c Human.cpp

Observers.o: Observers.h Observers.cpp
	g++ -c Observers.cpp

BorderGuard.o: BorderGuard.h BorderGuard.cpp Human.cpp Observers.cpp
	g++ -c BorderGuard.cpp

Prisoner.o: Prisoner.h Prisoner.cpp Human.cpp Subject.cpp
	g++ -c Prisoner.cpp 

PrisonArea.o: PrisonArea.h PrisonArea.cpp
	g++ -c PrisonArea.cpp

Subject.o: Subject.h Subject.cpp
	g++ -c Subject.cpp

run: 
	./main

tar:
	tar -cvz *.cpp *.h -f test.tar.gz

clean:
	rm main *.o
