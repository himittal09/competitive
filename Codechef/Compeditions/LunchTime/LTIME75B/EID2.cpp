#include <iostream>
using namespace std;

int main () {
    int t, a1, a2, a3, c1, c2, c3, fairflag;
    cin >> t;
    while (t--) {
        fairflag = 1;
        cin >> c1 >> c2>> c3 >> a1 >> a2 >> a3;
        if ((c1 > c2 && a1 <= a2) || (c2 > c3 && a2 <= a3)) {
            fairflag = 0;
        }
        if ((c1 < c2 && a1 >= a2) || (c2 < c3 && a2 >= a3)) {
            fairflag = 0;
        }
        // 3 6 9 8 10 9
        if ((c1 == c2 && a1 != a2) || (c2 == c3 && a2 != a3) || (c1 == c3 && a1 != a3)) {
            fairflag = 0;
        }
        printf("%s\n", fairflag ? "FAIR" : "NOT FAIR");
    }
}