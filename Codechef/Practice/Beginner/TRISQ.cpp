// if odd then -1

// without condition, divide by two

// then cout the combination with 2

#include<iostream>
using namespace std;

int main () {
    int t, b;
    cin >> t;
    while (t--) {
        cin >> b;

        if (b % 2 == 1) {
            b--;
        }

        b = b / 2;

        cout << b * (b-1) / 2 << endl;

    }
}