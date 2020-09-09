main: main.o Lion.o LionFactory.o Cheetah.o CheetahFactory.o Wolf.o WolfFactory.o WildDog.o WildDogFactory.o Predator.o PredatorFactory.o Prey.o PreyMemento.o PreyState.o PreyStore.o PredatorMemento.o PredatorState.o PredatorStore.o
	g++ -o main main.o Lion.o LionFactory.o Cheetah.o CheetahFactory.o Wolf.o WolfFactory.o WildDog.o WildDogFactory.o Predator.o PredatorFactory.o Prey.o PreyMemento.o PreyState.o PreyStore.o PredatorMemento.o PredatorState.o PredatorStore.o

main.o: main.cpp Lion.h LionFactory.h Cheetah.h CheetahFactory.h Wolf.h WolfFactory.h WildDog.h WildDogFactory.h Predator.h PredatorFactory.h Prey.h PreyMemento.h PreyState.h PreyStore.h PredatorMemento.h PredatorState.h PredatorStore.h
	g++ -c main.cpp

Lion.o: Lion.h Lion.cpp Predator.cpp
	g++ -c Lion.cpp

LionFactory.o: LionFactory.h LionFactory.cpp
	g++ -c LionFactory.cpp

Cheetah.o: Cheetah.h Cheetah.cpp Predator.cpp
	g++ -c Cheetah.cpp

CheetahFactory.o: CheetahFactory.h CheetahFactory.cpp
	g++ -c CheetahFactory.cpp

Wolf.o: Wolf.h Wolf.cpp Predator.cpp
	g++ -c Wolf.cpp

WolfFactory.o: WolfFactory.h WolfFactory.cpp 
	g++ -c WolfFactory.cpp

WildDog.o: WildDog.h WildDog.cpp	Predator.h
	g++ -c WildDog.cpp 

WildDogFactory.o: WildDogFactory.h WildDogFactory.cpp 
	g++ -c WildDogFactory.cpp 

Predator.o: Predator.h Predator.cpp Predator.cpp
	g++ -c Predator.cpp

PredatorFactory.o: PredatorFactory.h PredatorFactory.cpp
	g++ -c PredatorFactory.cpp

Prey.o: Prey.h Prey.cpp
	g++ -c Prey.cpp

PreyMemento.o: PreyMemento.h PreyMemento.cpp
	g++ -c PreyMemento.cpp

PreyState.o: PreyState.h PreyState.cpp
	g++ -c PreyState.cpp

PreyStore.o: PreyStore.h PreyStore.cpp
	g++ -c PreyStore.cpp

PredatorMemento.o: PredatorMemento.h PredatorMemento.cpp
	g++ -c PredatorMemento.cpp

PredatorState.o: PredatorState.h PredatorState.cpp
	g++ -c PredatorState.cpp

PredatorStore.o: PredatorStore.h PredatorStore.cpp
	g++ -c PredatorStore.cpp

run: 
	./main

tar:
	tar -cvz *.cpp *.h -f test.tar.gz

clean:
	rm *.o
