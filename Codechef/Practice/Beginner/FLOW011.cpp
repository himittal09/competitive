#include<iomanip>
#include<iostream>
using namespace std;

int main () {
    unsigned int t, salary;
    cin >> t;
    while (t--) {
        cin >> salary;
        float gross=salary;
        if (salary < 1500) {
            gross += salary / 10.0;
            gross += 9.0 * salary / 10.0;
        } else {
            gross += 500;
            gross += 98.0 * salary / 100.0;
        }
        cout << setprecision(2) << fixed;
        cout << gross << endl;
    }
}