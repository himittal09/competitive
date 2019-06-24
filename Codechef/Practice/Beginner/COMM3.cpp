#include <iostream>
#include <algorithm>
using namespace std;

int main () {
    int t, gcd, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        gcd = __gcd(a, b);
        cout << gcd << " " << a * b / gcd << endl;
    }
}