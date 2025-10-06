#ifndef SQUARE_H
#define SQUARE_H
//Giankarlo Task 2
class Square {
private:
    double side;

public:
    Square();              // Default constructor
    Square(double s);   

    double getSide() const;
    void setSide(double s);

    double area() const;
    double perimeter() const;
};

#endif
