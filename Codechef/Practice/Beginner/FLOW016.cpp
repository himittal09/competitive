#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int main () {
    ll t, gcd, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        gcd = __gcd<ll>(a, b);
        cout << gcd << " " << a * b / gcd << endl;
    }
}