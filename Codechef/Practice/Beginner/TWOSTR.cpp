#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool isMatchable (string s1, string s2) {
    for (int i=0 ; i<s1.length() ; i++) {
        if (s1[i] != '?' && s2[i] != '?' && s1[i] != s2[i]) {
            return false;
        }
    }
    return true;
}

int main () {
    int t;
    string s1, s2;
    cin >> t;
    while (t--) {
        cin >> s1 >> s2;
        if (isMatchable(s1, s2)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
}