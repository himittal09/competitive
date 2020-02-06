#include <iostream>
using namespace std;

void leftRotate (string str, long unsigned int d, long unsigned int n) {
    for (long unsigned int i=0; i<n; i++) {
        cout << str[(i+d)%n];
    }
}

void rightRotate (string str, long unsigned int d, long unsigned int n) {
    for (long unsigned int i=0; i<n; i++) {
        cout << str[(i+n-d)%n];
    }
}

int main () {
    long unsigned int n, q, k, lc=0, rc=0, rotateCount;
    char qt;
    string str;
    cin >> n;
    cin >> str;
    cin >> q;
    while (q--) {
        cin >> qt >> k;
        if (qt == 'l') {
            lc = (lc + k) % n;
        } else {
            rc = (rc + k) % n;
        }
    }
    if (lc == rc) {
        cout << str;
    } else if (lc > rc) {
        rotateCount = (lc - rc) % n;
        leftRotate(str, rotateCount, n);
    } else {
        rotateCount = (rc - lc) % n;
        rightRotate(str, rotateCount, n);
    }
}