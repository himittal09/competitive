#include<iostream>
using namespace std;

int main () {
    int t, n, k, temp;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        int max = n % k;
        for (int i=1 ; i<k ; i++) {
            temp = n % i;
            if (temp > max) {
                max = temp;
            }
        }
        cout << max << endl;
    }
}