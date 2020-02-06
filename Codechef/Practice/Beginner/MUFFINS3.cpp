#include<iostream>
#include<math.h>
using namespace std;

int maxNum (const int n1, const int n2) {
    return n1 > n2 ? n1 : n2;
}

int maxmod (const int n, int k) {
    int max = 0;
    for(int i = k; i > 0 ; --i) {
        int xx = n - (n / i) * i; // or int xx = n % i;
        if(max < xx)
            max = xx;
        if (i < max)
            break;   // all remaining values will be smaller than max, so break out!
    }
    return max;

}

int main () {

    int t, reminder;
    long unsigned int n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << n - maxmod(n, n) << endl;
        // cout << maxmod(n, n) << endl;
    }

    return 0;
}