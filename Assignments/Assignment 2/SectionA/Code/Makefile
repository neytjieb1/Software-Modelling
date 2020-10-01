main: main.o NoLevelState.o LevelOneState.o levelOneStrategy.o LevelTwoState.o levelTwoStrategy.o LevelThreeState.o levelThreeStrategy.o LevelFourState.o levelFourStrategy.o LevelFiveState.o levelFiveStrategy.o LevelState.o PandemicStrategy.o Pandemic.o  
	g++ -o main main.o NoLevelState.o LevelOneState.o levelOneStrategy.o LevelTwoState.o levelTwoStrategy.o LevelThreeState.o levelThreeStrategy.o LevelFourState.o levelFourStrategy.o LevelFiveState.o levelFiveStrategy.o LevelState.o PandemicStrategy.o Pandemic.o

main.o: main.cpp NoLevelState.o LevelOneState.h levelOneStrategy.h LevelTwoState.h levelTwoStrategy.h LevelThreeState.h levelThreeStrategy.h LevelFourState.h levelFourStrategy.h LevelFiveState.h levelFiveStrategy.h LevelState.o PandemicStrategy.o Pandemic.o
	g++ -c main.cpp

Pandemic.o: Pandemic.h Pandemic.cpp Pandemic.cpp
	g++ -c Pandemic.cpp

LevelState.o: LevelState.h LevelState.cpp LevelState.cpp
	g++ -c LevelState.cpp

PandemicStrategy.o: PandemicStrategy.h PandemicStrategy.cpp
	g++ -c PandemicStrategy.cpp

NoLevelState.o: NoLevelState.h NoLevelState.cpp	LevelState.h
	g++ -c NoLevelState.cpp 

LevelOneState.o: LevelOneState.h LevelOneState.cpp LevelState.cpp
	g++ -c LevelOneState.cpp

LevelTwoState.o: LevelTwoState.h LevelTwoState.cpp LevelState.cpp
	g++ -c LevelTwoState.cpp

LevelThreeState.o: LevelThreeState.h LevelThreeState.cpp LevelState.cpp
	g++ -c LevelThreeState.cpp

LevelFourState.o: LevelFourState.h LevelFourState.cpp	LevelState.h
	g++ -c LevelFourState.cpp 

LevelFiveState.o: LevelFiveState.h LevelFiveState.cpp	LevelState.h
	g++ -c LevelFiveState.cpp 

levelOneStrategy.o: levelOneStrategy.h levelOneStrategy.cpp PandemicStrategy.cpp
	g++ -c levelOneStrategy.cpp

levelTwoStrategy.o: levelTwoStrategy.h levelTwoStrategy.cpp PandemicStrategy.cpp
	g++ -c levelTwoStrategy.cpp

levelThreeStrategy.o: levelThreeStrategy.h levelThreeStrategy.cpp PandemicStrategy.cpp
	g++ -c levelThreeStrategy.cpp

levelFourStrategy.o: levelFourStrategy.h levelFourStrategy.cpp PandemicStrategy.cpp
	g++ -c levelFourStrategy.cpp

levelFiveStrategy.o: levelFiveStrategy.h levelFiveStrategy.cpp PandemicStrategy.cpp
	g++ -c levelFiveStrategy.cpp

run: 
	./main

tar:
	tar -cvz *.cpp *.h -f test.tar.gz

clean:
	rm *.o
