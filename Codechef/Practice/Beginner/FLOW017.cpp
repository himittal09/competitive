#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main () {

    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cout.tie(NULL);

    register int t, a[3];
    cin >> t;
    while (t--) {
        for (int i=0 ; i<3 ; i++) {
            cin >> a[i];
        }
        sort(a, a+3);
        cout << a[0] << endl;
    }
}