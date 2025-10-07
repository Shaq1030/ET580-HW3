
all: driver

# Task 3 (Giankarlo) I added Rectangle.o


driver: driver.o Square.o Rectangle.o Triangle.o
	g++ -std=c++11 driver.o Square.o Rectangle.o Triangle.o -o driver

driver.o: driver.cpp Square.h Rectangle.h Triangle.h
	g++ -std=c++11 -c driver.cpp

Square.o: Square.cpp Square.h
	g++ -std=c++11 -c Square.cpp

Rectangle.o: Rectangle.cpp Rectangle.h
	g++ -std=c++11 -c Rectangle.cpp

Triangle.o: Triangle.cpp Triangle.h
	g++ -std=c++11 -c Triangle.cpp

clean:
	rm -f *.o driver
