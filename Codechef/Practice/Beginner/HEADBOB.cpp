#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int len, i=0;
        string res;
        cin >> len;
        cin >> res;
        for (i=0 ; i<len ; i++) {
            if (res[i] == 'Y') {
                cout << "NOT INDIAN\n";
                break;
            }
            if (res[i] == 'I') {
                cout << "INDIAN\n";
                break;
            }
        }
        if (i == len) {
            cout << "NOT SURE\n";
        }
    }
}