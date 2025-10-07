#include <iostream>
#include "Square.h"
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

int main() {
    cout << "=== Testing Square ===" << endl;
    Square s1;          
    Square s2(4);       

    cout << "Default square area = " << s1.area()
         << " perimeter = " << s1.perimeter() << endl;
    cout << "Square with side 4 area = " << s2.area()
         << " perimeter = " << s2.perimeter() << endl;

    cout << "\n=== Testing Rectangle ===" << endl;
    Rectangle r1;       
    Rectangle r2(6, 3); 

    cout << "Default rectangle area = " << r1.area()
         << " perimeter = " << r1.perimeter() << endl;
    cout << "Rectangle (6 x 3) area = " << r2.area()
         << " perimeter = " << r2.perimeter() << endl;

    cout << "\n=== Testing Triangle ===" << endl;
    Triangle t1;       
    Triangle t2(4, 5);  

    cout << "Default triangle area = " << t1.area()
         << " perimeter (approx) = " << t1.perimeter() << endl;
    cout << "Triangle (base 4, height 5) area = " << t2.area()
         << " perimeter (approx) = " << t2.perimeter() << endl;

    cout << "\n=== Program complete ===" << endl;
    return 0;
}