#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main () {

    unsigned int t;
    cin >> t;
    while (t--) {

        int sum=0;

        string str;
        cin >> str;
        
        sum = sum + str[0]-'0';
        sum = sum + (str[str.length()-1]-'0');

        cout << sum << endl;
    }

    return 0;
}