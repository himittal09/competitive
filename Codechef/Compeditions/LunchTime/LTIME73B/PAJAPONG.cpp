#include<bits/stdc++.h>
#include<iostream>
using namespace std;

typedef unsigned long long ll;

int main () {
    int t;
    long unsigned int x, y, k;
    cin >> t;
    
    while (t--) {
        cin >> x >> y >> k;
        ll div = (x + y) / k;
        if (div & 1) {
            cout << "Paja\n";
        } else {
            cout << "Chef\n";
        }
        // div & 1 also check for odd and even div & 1 == 1 => odd
        // if (div % 2 == 0) {
        //     cout << "Chef\n";
        // } else {
        //     cout << "Paja\n";
        // }
    }
}