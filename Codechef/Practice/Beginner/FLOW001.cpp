#include<iostream>
using namespace std;

int main () {

    unsigned int t;
    int sum1, sum2;

    cin >> t;

    while (t--) {
        cin >> sum1 >> sum2;
        cout << (sum1 + sum2) << endl;
    }

    return 0;
}