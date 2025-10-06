#include <iostream>
#include "Square.h" //include task 2 square.h G.G
#include "Rectangle.h"
using namespace std;

int main() {
    cout << "=== Testing Square ===" << endl;
    Square s1;                // default 1x1
    cout << "Default square side = " << s1.getSide()
         << " area = " << s1.area()
         << " perimeter = " << s1.perimeter() << endl;

    Square s2(4);             // 4x4
    cout << "Square (4x4) area = " << s2.area()
         << " perimeter = " << s2.perimeter() << endl;

    cout << "\n=== Testing Rectangle ===" << endl;
    Rectangle r1;             // default 1x2
    cout << "Default rectangle area = " << r1.area()
         << " perimeter = " << r1.perimeter() << endl;

    Rectangle r2(6, 3);       // 6x3
    cout << "Rectangle (6x3) area = " << r2.area()
         << " perimeter = " << r2.perimeter() << endl;

    return 0;
}
