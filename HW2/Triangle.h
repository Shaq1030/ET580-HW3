#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle {
private:
    double base;
    double height;

public:
    Triangle();                   // Default constructor
    Triangle(double b, double h);  

    double getBase() const;
    double getHeight() const;

    void setBase(double b);
    void setHeight(double h);

    double area() const;         
    double perimeter() const;     
};

#endif
