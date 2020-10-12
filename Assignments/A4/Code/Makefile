main: main.o RemoteControlCar.o RemoteControlPlane.o
	g++ -o main main.o RemoteControlCar.o RemoteControlPlane.o

main.o: main.cpp
	g++ -c main.cpp

RemoteControlCar.o: RemoteControlCar.h RemoteControlCar.h
	g++ -c RemoteControlCar.cpp

RemoteControlPlane.o: RemoteControlPlane.h RemoteControlPlane.cpp
	g++ -c RemoteControlPlane.cpp

run:
	./main

clean:
	rm *.o main