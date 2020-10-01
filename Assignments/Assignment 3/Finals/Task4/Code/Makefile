make: makeall
	g++ *.o -o main

makeall: *.cpp *.h
	g++ -c *cpp

run:
	./main

tar:
	tar -cvz *.cpp *.h -f test.tar.gz

clean:
	rm main *.o
