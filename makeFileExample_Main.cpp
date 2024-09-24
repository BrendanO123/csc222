#include <iostream>
#include <string>
#include "makeFileExample_Helper.h"
using namespace std;

ostream& operator << (ostream &os, const test &s) {
    return (os << s.toString());
}

int main()
{
    test obj1 = test(3, 4);
    test obj2 = test(3);
    test obj3 = test();
    test obj4 = test("General Kenobi", 3, 4);
    test obj5 = test("General Kenobi", 3);
    test obj6 = test("General Kenobi");

    obj1.greet();
    obj2.greet();
    obj4.greet();
    cout << endl;

    cout << obj1.dist() << '\n' << obj4.dist() << '\n' << obj6.dist() << '\n' << endl;
    cout << (obj1.larger(obj3) ? "Larger\n\n" : "Smaller\n\n");

    cout << "(" << obj6.getX() << ", " << obj6.getY() << ")\n\n";

    cout << obj1.toString() << obj2 << obj4.toString() << endl;
    
    return 0;
}