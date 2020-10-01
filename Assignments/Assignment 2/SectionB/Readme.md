##Section B

####Instructions to run
Find included the file labelled "Code" which contains all relevant code as 
well as a makefile.

Code can be compiled and run by the commands "make" and "make run" 
respectively.

####Notes on Main

This main.cpp simply creates imageElements each decorated by a single/multiple 
decorator(s).
These are then added to a baseImage and printed accordingly.


####Explanation of Workflow
I have decided to model something like the pop-up poster boards used at 
conventions and entrances which is of a long rectangular shape.

The main instantiates a number of different imageElements each decorated by
a set of or single decorators. 

Each decorator consists of its unique word as well as an associated ASCII
Art picture.
Each imageElement may be decorated by multiple decorators, but is characterised 
by a single output colour.

These imageElements are then all added to a single BaseImage.

drawImageElements may be called either on an imageElement, or on a BaseImage.
If called on a BaseImage, drawImageElements is simply called for each of the 
ImageElements contained in the BaseImage. 

This function transfers the lines of each Decorator currently decorating to 
the imageElement.

Finally, drawPoster is called. This function is responsible for physical output,
as well as things such as a border, header and footer.

Note that imageElement may be used to add either a Decorator to an ImageElement or an
ImageElement to a BaseImage. 


####Bibliography
I made use of the termcolor namespace to facilitate the colouring of the
terminal. 
This was kindly made available by the user trailfrenzy at https://github.com/ikalnytskyi/termcolor