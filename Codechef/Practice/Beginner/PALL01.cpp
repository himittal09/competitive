#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int palindrome (int num) {
    int newNum=0;
    while (num) {
        newNum = newNum * 10 + num % 10;
        num = num / 10;
    }
    return newNum;
}

int main () {
    int t, num;
    cin >> t;
    while (t--) {
        cin >> num;
        if (palindrome(num) == num) {
            cout << "wins\n";
        } else {
            cout << "losses\n";
        }
    }
}