#include "Square.h"
//Giankarlo Gomez task2
// Default constructor
Square::Square() : side(1) {}
Square::Square(double s) : side(s) {}
// Getter
double Square::getSide() const {
    return side;
}
// Setter
void Square::setSide(double s) {
    side = s;
}
// Area
double Square::area() const {
    return side * side;
}
// Perimeter
double Square::perimeter() const {
    return 4 * side;
}
