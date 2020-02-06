#include <bits/stdc++.h>
using namespace std;

int main () {
    unsigned int n, q, temp, lr, ur, counter=0;
    cin >> n >> q;
    vector <unsigned int> arr(n);
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    while (q--) {
        cin >> lr >> ur;
        for (register unsigned int i=lr-1; i<ur; i++) {
            for (register unsigned int j=lr; j<ur; j++) {
                for (register unsigned int k=lr+1; k<ur; k++) {
                    temp = arr[i] + arr[j] + arr[k];
                    if (temp % arr[i] == 0 && temp % arr[j] == 0 && temp % arr[k] == 0) {
                        counter++;
                    }
                }
            }
        }
    }
    cout << counter;
    return 0;
}