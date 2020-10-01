##Section C

####Instructions to run
Find included the file labelled "Code" which contains all relevant code as 
well as a makefile.

Code can be compiled and run by the commands "make" and "make run" 
respectively.

####Notes on Main

This main serves to illustrate 3 things. 

1. The implementation of the cloning of a poster so as to make use of the Prototype Pattern.
2. The implementation of a AbstractPrototype store so as to clone posters for each level
3. The re-implementation of the code as in Section 1, but with the newly added functionality
included. 

####Explanation of Workflow

I make use of the Prototype Design Pattern when linking Poster to my Pandemic hierarchy since
the instantiation of a poster involves file-reading procedures. I therefore hard-code a prototype 
of a poster for each level (with corresponding decorators and colour). Upon 
instantiation of a Pandemic Instance, I create an array of Prototypes and clone
the necessary poster as the levels change. 

This is seen in the function initialisePosters as well as in my newly updated changeLevel
function which is now responsible for 3 things:
1. Changing State
2. Changing Strategy
3. Updating Posters


_(Note that setColour may be used to set the colour of an ImageElement, or the
entire image may be coloured by calling setColour on an instance of a BaseImage.)_


####Bibliography
Here as well I made use of the termcolor namespace to facilitate the colouring of the
terminal. 
This was kindly made available by the user trailfrenzy at https://github.com/ikalnytskyi/termcolor