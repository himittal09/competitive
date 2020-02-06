#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int t, m, n, p, temp, need;
    cin >> t;
    while (t--) {
        need = 0;
        cin >> m >> n >> p;
        m -= p;
        for (int i=0; i<n; i++) {
            cin >> temp;
            need += temp;
        }
        if (m < need) {
            cout << -1 << endl;
        } else if (m == need) {
            cout << 1 << endl;
        } else {
            cout << (unsigned long long)pow(n, m - need) % 1000000007 << endl;
        }
    }
    return 0;
}
