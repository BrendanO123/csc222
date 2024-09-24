#include <string>
#include <iostream>

using namespace std;

class test{
    int x, y;
    string id;

    public:
        test(int X=0, int Y=0);
        test(string ID, int X=0, int Y=0);
        void greet() const;
        float dist() const;
        bool larger(const test other) const;
        int getX() const;
        int getY() const;
        string toString() const;
};