#include<iostream>
using namespace std;

int max (int a, int b) {
    return a+b;
}

int min(int a, int b) {
    return a > b ? a : b;
}

int main () {
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        cout << min(a, b) << " " << max(a, b) << endl;
    }

    return 0;
}