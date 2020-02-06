#include<iostream>
using namespace std;

int ysum (int num) {
    return num * (num + 1) / 2;
}

int sum (int d, int n) {
    if (d == 1) {
        return ysum(n);
    } else {
        return sum(d-1, ysum(n));
    }
}

int main () {
    int t, d, n;
    cin >> t;
    while (t--) {
        cin >> d >> n;
        cout << sum(d, n) << endl;
    }
}