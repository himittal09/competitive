#include <string>
#include <iostream>
using namespace std;

int main () {
    string S;
    cin >> S;
    int yeet;
    try
    {
        yeet = stoi(S);
        cout << yeet;
    }
    catch(...)
    {
        cout << "Bad String";
    }
    
    return 0;
}

