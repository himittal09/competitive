#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main () {
    int t;
    string correctAnswer, chefAnswer;
    cin >> t;
    while (t--) {
        int n, score=0;
        cin >> n;
        cin >> correctAnswer;
        cin >> chefAnswer;

        for (int i=0 ; i<n-1 ; i++) {
            if (correctAnswer[i] == chefAnswer[i]) {
                score++;
            } else if (chefAnswer[i] != 'N') {
                chefAnswer[i+1] = 'N';
            }
        }

        if (correctAnswer[n-1] == chefAnswer[n-1]) {
            score++;
        }
        
        cout << score << endl;
    }
}