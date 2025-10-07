//Melanie Kwak
//task 2
#include "Square.h"
#include <iostream>

Square::Square() : side(1.0) {}

Square::Square(double s) : side(s) {}

double Square::getSide() const {
    return side;
}

void Square::setSide(double s){
    side = s;
}

double Square::area() const {
    return side * side;
}

void print(const Square& sq) {
    std::cout <<"Square Area: " << sq.area() << std::endl;
}
