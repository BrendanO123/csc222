#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Enter a string to convert: " << endl;

    string str;
    getline(cin, str);

    cout << endl << "Length (with null char):" << str.length()+1 << endl << "Bytes:\n\t" ;
    for(int i=0; i<str.length()+1; i++){
        char c = str[i];
        int x=c;
        for(int j=7; j>=0; j--){
            cout << ((x & (1<<j))>>j);
        }
        cout << ' ';
    }

    cout << endl;
    return 0;
}
