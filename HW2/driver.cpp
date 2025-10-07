#include <iostream>
#include "Square.h"
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

int main() {
    cout << "=== Testing Square ===" << endl;
    Square s1;
    cout << "Default square area = " << s1.area()
         << " perimeter = " << s1.perimeter() << endl;

    cout << "\n=== Testing Rectangle ===" << endl;
    Rectangle r1(6, 3);
    cout << "Rectangle area = " << r1.area()
         << " perimeter = " << r1.perimeter() << endl;

    cout << "\n=== Testing Triangle ===" << endl;
    Triangle t1(4, 5);
    cout << "Triangle area = " << t1.area()
         << " perimeter (approx) = " << t1.perimeter() << endl;

    return 0;
}
