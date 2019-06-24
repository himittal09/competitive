#include<iomanip>
#include<iostream>
using namespace std;

int main () {

    float t, quantity, price;
    cin >> t;

    while (t--) {
        cout << fixed;
        cout << setprecision(6);
        cin >> quantity >> price;
        if (quantity <= 1000) {
            cout << (float)(quantity * price) << endl;
        } else {
            cout << (9.0 * quantity * price / 10.0) << endl;
        }
    }

    return 0;
}