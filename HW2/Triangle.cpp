#include "Triangle.h"

// Default constructor
Triangle::Triangle() : base(1), height(1) {}

// Parameterized constructor
Triangle::Triangle(double b, double h) : base(b), height(h) {}

double Triangle::getBase() const { return base; }
double Triangle::getHeight() const { return height; }

void Triangle::setBase(double b) { base = b; }
void Triangle::setHeight(double h) { height = h; }

double Triangle::area() const { return 0.5 * base * height; }

double Triangle::perimeter() const { return 3 * base; }  
