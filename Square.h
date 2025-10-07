//melanie kwak 
//Task 2
class Square{
private:
    double side; //length of one side

public:
    Square();

    Square(double s);

    double getSide() const;

    void setSide(double s);

    double area() const;


};

void print(const Square& sq);

#endif 

