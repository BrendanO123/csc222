#include <iostream>
#include <string>
#include "classTest.h"
using namespace std;

classTest :: classTest(int a, int b, int c){x=a; y=b; z=c; money=0; name="General Kenobi";}
classTest :: classTest(double Money){x=0; y=0; z=0; money=Money; name="General Kenobi";}
classTest :: classTest(double Money, int a, int b, int c){
    money=Money;
    x=a; y=b; z=c;
    name="General Kenobi";
}

void classTest :: printValues() const{
    cout << "\nX: " << x << "\nY: " << y << "\nZ: " << z << endl;
    cout << "\nBalance: " << money << endl;
}
void classTest :: greet() const{
    cout << "Hello there, " << name << endl;
}
bool classTest :: incBalance(double amount){
    if(amount>0){
        money+=amount;
        return true;
    }
    return false;
}
