#include<iostream>
using namespace std;

int sqrt (int num) {
    int root=1;
    while (root*root <= num) {
        root++;
    }
    return root;
}

int main () {
    int t, num;
    cin >> t;
    while (t--) {
        cin >> num;
        cout << sqrt(num)-1 << endl;
    }
}