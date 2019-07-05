#include<math.h>
#include<iostream>
using namespace std;

bool isPrime (unsigned int num) {
    bool isPrime = true;
    if (num == 1) {
        isPrime = false;
    }
    for (int i=2 ; i<=sqrt(num) ; i++) {
        if (num % i == 0) {
            isPrime = false;
        }
    }
    return isPrime;
}

int main() {

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        if (isPrime(n)) {
            cout << "Prime\n";
        } else {
            cout << "Not prime\n";
        }
    }

    return 0;
}
