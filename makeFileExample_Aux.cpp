#include "makeFileExample_Helper.h"
#include <string>
#include <iostream>
#include <cmath>

using namespace std;

test :: test(int X, int Y){
    x = X; y = Y;
    id = "NoName";
}

test :: test(string ID, int X, int Y){
    x = X; y = Y; id = ID;
}

void test :: greet() const{
    cout << "Why hello there, " << id << ". Nice to meet you!\n";
}
string test :: toString() const{
    return ("My name is " + id + ", and I exist at (" + std :: to_string(x) + ", " + std :: to_string(y) + ").\n");
}

int test :: getX() const{return x;}
int test :: getY() const{return y;}

float test :: dist() const{
    return sqrt( x * x  +  y * y );
}
bool test :: larger(const test other) const{
    return dist() > other.dist();
}
