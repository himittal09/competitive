#include<iostream>
using namespace std;

int calculate_the_maximum(int n, int k) {
    register int maxAnd=0, temp;
    for (int i=1 ; i<n ; i++) {
        for (int j=i+1 ; j<=n ; j++) {
            temp = i & j;
            if (temp > maxAnd && temp < k) {
                maxAnd = temp;
            }
        }
    }
    return maxAnd;
}

int main () {
    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        cout << calculate_the_maximum(n, k) << endl;
    }
    return 0;
}