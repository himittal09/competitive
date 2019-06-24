#include<iostream>
using namespace std;

int main () {    
    unsigned int t, n, sum;
    cin >> t;
    while (t--) {
        cin >> n;
        sum=0;
        while (n) {
            sum = sum + n % 10;
            n = n / 10;
        }
        cout << sum << endl;
    }
    return 0;
}