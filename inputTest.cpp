#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

int main(){
    int temp;
    string str;
    vector<int> list;

    cout << "Enter a string of numbers (delim of space): " << endl;

    getline(cin, str);

    stringstream sstr;
    sstr << str;

    while(sstr >> temp){list.push_back(temp);}

    cout << "Your nums were:\n";
    for(int i =0; i<list.size(); i++){cout << list[i] << ' ';}
    
    cout << "\n\nBackwards the nums were:\n";
    for(int i=list.size()-1; i>=0; i--){cout << list[i] << ' ';}
    cout << endl;

    return 0;
}