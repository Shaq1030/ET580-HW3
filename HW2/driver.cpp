#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    Rectangle r;                 // default 1x2
    cout << "Default rectangle area = " << r.area() << endl;

    Rectangle r2(6, 3);          // 6x3
    cout << "Rectangle (6x3) area = " << r2.area()
         << " perimeter = " << r2.perimeter() << endl;

    return 0;
}
