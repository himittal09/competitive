#include<bits/stdc++.h>
#include<math.h>
#include<iostream>
using namespace std;

int main () {

    int t, d;
    cin >> t;
    while(t--) {
        int achieveableProxy=0, currentAttendence=0;
        cin >> d;
        string s;
        cin >> s;
        for (int i=2 ; i < d-2 ; i++) {
            if ((s[i-2] == 'P' || s[i-1] == 'P') && (s[i+1] == 'P' || s[i+2] == 'P')) {
                achieveableProxy++;
            }
            if (s[i] == 'P') {
                currentAttendence++;
            }
        }
        if (s[0] == 'P') {
            currentAttendence++;
        }
        if (s[1] == 'P') {
            currentAttendence++;
        }
        if (s[d-2] == 'P') {
            currentAttendence;
        }
        if (s[d-1] == 'P') {
            currentAttendence++;
        }
        // check how much proxy is needed here
        // no proxy needed test
        if (floor(currentAttendence * 100.0 / d) >= 75) {
            cout << 0 << endl;
            return 0;
        }
        
        // unachieveable proxy needed test
        if ((floor((currentAttendence + achieveableProxy) * 100.0 / d)) < 75) {
            cout << -1 << endl;
            return 0;
        }
        
        double requiredProxy = 75.0 * d / 100.0 - (double)currentAttendence;
        cout << requiredProxy << " " << ceil(requiredProxy) << endl;

    }

    return 0;
}