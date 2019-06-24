#include<iostream>
using namespace std;

int main () {

    int withdraw;
    float balance;
    
    cin >> withdraw;
    cin >> balance;

    if (withdraw % 5 != 0) {
        cout << balance;
        return 0;
    }

    if (withdraw + 0.5 > balance) {
        cout << balance;
        return 0;      
    }

    cout << (balance - withdraw - 0.5);

    return 0;
}