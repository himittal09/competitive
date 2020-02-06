#include <iostream>
using namespace std;

int saveThePrisoner(int prisoners, int sweets, int start) {
    int var = (start + sweets - 1) % prisoners;
    return var ? var : prisoners;
}

int main () {
    int t, n, m, s;
    cin >> t;
    while (t--) {
        cin >> n >> m >> s;
        cout << saveThePrisoner(n, m, s) << "\n";
    }
    return 0;
}
