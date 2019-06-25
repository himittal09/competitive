#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int steelGrade (float h, float cc, float ts) {
    bool c1 = h > 50;
    bool c2 = cc < 0.7;
    bool c3 = ts > 5600;

    if ( c1 && c2 && c3 ) {
        return 10;
    } else if ( c1 && c2 && !c3 ) {
        return 9;
    } else if ( !c1 && c2 && c3 ) {
        return 8;
    } else if ( c1 && !c2 && c3 ) {
        return 7;
    } else if ( c1 || c2 || c3 ) {
        return 6;
    } else {
        return 5;
    }
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        float h, cc, ts;
        cin >> h >> cc >> ts;
        cout << steelGrade(h, cc, ts) << endl;
    }
}