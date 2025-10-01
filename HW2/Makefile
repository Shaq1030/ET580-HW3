
all: driver

# Task 3 (Giankarlo) I added Rectangle.o
driver: driver.o Square.o Rectangle.o
	g++ -std=c++11 -o driver driver.o Square.o Rectangle.o

driver.o: driver.cpp Square.h Rectangle.h
	g++ -std=c++11 -c driver.cpp

Square.o: Square.cpp Square.h
	g++ -std=c++11 -c Square.cpp

Rectangle.o: Rectangle.cpp Rectangle.h
	g++ -std=c++11 -c Rectangle.cpp

clean:
	rm -f *.o driver