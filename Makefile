all: driver

driver: driver.o Square.o
	g++ driver.o Square.o -o driver

driver.o: driver.cpp Square.h
	g++ -c driver.cpp

Square.o: Square.cpp Square.h
	g++ -c Square.cpp

clean:
	rm -f *.o driver