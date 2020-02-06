#include<iostream>
using namespace std;

typedef long long ll;

ll factorial (int n) {
    if (n == 2) {
        return 2;
    } else {
        return n * factorial(n-1);
    }
}

int main () {
    int n;
    cin >> n;
    cout << factorial(n);

}