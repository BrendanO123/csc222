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

void test :: greet(){
    cout << "Why hello there, " << id << ". Nice to meet you!\n";
}
string test :: to_string(){
    return ("My name is " + id + ", and I exist at (" + std :: to_string(x) + ", " + std :: to_string(y) + ").\n");
}

int test :: getX(){return x;}
int test :: getY(){return y;}

float test :: dist(){
    return sqrt( x * x  +  y * y );
}
bool test :: larger(test other){
    return dist() > other.dist();
}
