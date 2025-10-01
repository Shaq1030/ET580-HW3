#include "Rectangle.h"

// Default Constructor
Rectangle::Rectangle() : length(1), width(2) {}

// Parameters
Rectangle::Rectangle(double l, double w) : length(l), width(w) {}

double Rectangle::getLength() const { return length; }
double Rectangle::getWidth()  const { return width;  }

void Rectangle::setLength(double l) { length = l; }
void Rectangle::setWidth(double w)  { width  = w; }

double Rectangle::area() const { return length * width; }
double Rectangle::perimeter() const { return 2 * (length + width); }
