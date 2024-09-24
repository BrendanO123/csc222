#include <string>
#include <iostream>

using namespace std;

class test{
    int x, y;
    string id;

    public:
        test(int X=0, int Y=0);
        test(string ID, int X=0, int Y=0);
        void greet();
        float dist();
        bool larger(test other);
        int getX();
        int getY();
        string to_string();
};