#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        string str;
        int count=0;
        cin >> str;
        for(int i=0 ; i<str.length() ; i++) {
            if (str[i] == '4') {
                count ++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
