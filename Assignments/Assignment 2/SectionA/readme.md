##Section A

####Instructions to run
Find included the file labelled "Code" which contains all relevant code as 
well as a makefile.

Code can be compiled and run by the commands "make" and "make run" 
respectively.

####Notes and Explanation of Workflow
The main initialises a Pandemic instance at level 0 and then simulates 
the increase of a pandemic as well as its subsequent decrease. 

I also added a function changeLevel, which takes on some of the work done
in both increaseLevel and decreaseLevel.

setInitialStrategyState is used to initialise both the strategy and state 
to a user-defined initial value.  