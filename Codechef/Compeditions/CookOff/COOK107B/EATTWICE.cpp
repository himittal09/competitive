#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int maxTasty[m] = {0};
        int day, tasty;
        for (int i=0 ; i<n ; i++) {
            cin >> day >> tasty;
            if (maxTasty[day-1] < tasty) {
                int temp = maxTasty[day-1];
                maxTasty[day-1] = tasty;
                tasty = temp;
            }
        }

        sort(maxTasty, maxTasty+m);

        cout << maxTasty[m-1] + maxTasty[m-2] << endl;
        // find max 2 array items in maxtasty and print
    }
}