#COS 214 - Assignment 1
   BL Nortier 17091820 

(Find attached instructions for execution,
 answers to the theoretical questions and instruction on UML diagrams)

###Instructions for Execution
Find attached the entire scope of necessary files in the folder. 
The makefile has been attached. Run the following commands:

1. make
2. make run
3. make clean

##Answers to Theory Questions & Motivation of Decisions

Task 1: I chose to add a variable initDamage here to record and re-instantiate predator's damage in cases where the 
Predator had been using its speciality but the Prey died so as to fulfill the "either-or" statement in 1.2.5. I also added a variable type, which is determined by the relevant subclass of predator solely for the purpose of facilitating output during testing.

I also implemented cout in all constructors and destructors so as to properly view the flow of the program.

Lastly I added a default "verbose" parameter to my hunt function to print out the information of both predator and prey 
during a single hunt to make sure that my workflow did actually get realised during the process of codin

1.4 Template Design Pattern

2.4 Factory and Abstract Factory 

##UML Diagrams

1.5 - Find in Folder "UML_A1" labelled as UML_Task1

2.3 - Find in Folder "UML_A1" labelled as UML_Task2

4.5 - Find in Folder "UML_A1" labelled as SystemUMLClassDiagram
 

