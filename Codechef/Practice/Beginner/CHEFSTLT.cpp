#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main () {
    int t;
    string s1, s2;
    cin >> t;
    while (t--) {
        int minDiff=0, maxDiff=0;
        cin >> s1 >> s2;
        for (int i=0 ; i < s1.length() ; i++) {
            if (s1[i] != '?' && s2[i] != '?') {
                if (s1[i] != s2[i]) {
                    minDiff++;
                    maxDiff++;
                }
            } else {
                // anyone is ?
                maxDiff++;
            }
        }
        cout << minDiff << " " << maxDiff << endl;
    }
}