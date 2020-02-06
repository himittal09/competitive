#include<iostream>
using namespace std;
typedef long long ll;

ll fact (int num) {
    if (num == 0) {
        return 1;
    } else {
        return num * fact(num-1);
    }
}

int main () {
    int t, num;
    cin >> t;
    while (t--) {
        cin >> num;
        cout << fact(num) << endl;
    }
}