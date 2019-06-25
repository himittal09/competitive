#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int getBallonCount (string ballons) {
    int brassCount=0, amberCount=0;
    for (int i=0 ; i<ballons.length() ; i++) {
        if (ballons[i] == 'a') {
            amberCount++;
        } else {
            brassCount++;
        }
    }
    return amberCount < brassCount ? amberCount : brassCount;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        string ballons;
        cin >> ballons;
        cout << getBallonCount(ballons) << endl;
    }
}