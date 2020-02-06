#include<iostream>
#include<math.h>
using namespace std;

bool isPrime (int num) {
    for (int i=2 ; i <= sqrt(num) ; i++) {
        if (!(num % i)) {
            return false;
        }
    }
    return true;
}

int main () {
    int t, num;
    cin >> t;
    while (t--) {
        cin >> num;
        if (isPrime(num)) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }
}