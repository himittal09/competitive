#include<iostream>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if (x1==x2) {
            if (y1 > y2) {
                cout << "down\n";
            } else {
                cout << "up\n";
            }
        } else if (y1 == y2) {
            if (x1 > x2) {
                cout << "left\n";
            } else {
                cout << "right\n";
            }
        } else {
            cout << "sad\n";
        }
    }

    return 0;
}