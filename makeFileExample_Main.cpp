#include <iostream>
#include <string>
#include "makeFileExample_Helper.h"
using namespace std;

ostream& operator << (ostream &os, const test &s) {
    return (os << s.toString());
}

int main()
{
    test obj1 = test(3, 4); // x,y
    test obj2 = test(3); //x
    test obj3 = test(); //empty
    test obj4 = test("General Kenobi", 3, 4); //id, x, y
    test obj5 = test("General Kenobi", 3); //id, x
    test obj6 = test("General Kenobi"); //id

    cout << "\nObject 1: "; obj1.greet();
    cout << "Object 2: "; obj2.greet();
    cout << "Object 4: "; obj4.greet();
    cout << endl;

    cout 
        << "Object 1 distance: " << obj1.dist() 
        << "\nObject 4 distance: " << obj4.dist() 
        << "\nObject 6 distance: " << obj6.dist() 
        << '\n' << endl;
    
    cout << "Object 1 is " << (obj1.larger(obj3) ? "larger" : "smaller") << " than Object 3.\n\n";

    cout << "Object 6 is @: (" << obj6.getX() << ", " << obj6.getY() << ")\n\n";

    cout << "Object 1: " << obj1.toString() << "Object 3: " << obj3 << "Object 4: " << obj4.toString() << endl;
    
    return 0;
}