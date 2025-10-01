#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle();                  // default: length = 1, width = 2
    Rectangle(double l, double w);

    double getLength() const;
    double getWidth()  const;

    void setLength(double l);
    void setWidth(double w);

    double area() const;          // length * width
    double perimeter() const;     // 2 * (length + width)
};

#endif
