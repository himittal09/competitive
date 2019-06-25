#include<iostream>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int oddDolls = 0, temp, n;
        cin >> n;
        for (int i=0 ; i<n ; i++) {
            cin >> temp;
            if (temp % 2) {
                oddDolls++;
            }
        }
        cout << oddDolls << endl;
    }
}