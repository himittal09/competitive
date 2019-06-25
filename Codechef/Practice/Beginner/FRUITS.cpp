#include<math.h>
#include<iostream>
using namespace std;

int fruitDiff (int n, int m, int k) {
    int requirement = abs(n-m);
    /* if (requirement == 0) {
        return 0;
    } else */ if (k >= requirement) {
        return 0;
    } else {
        return requirement - k;
    }
}

int main () {
    int t, n, m, k;
    cin >> t;
    while (t--) {
        cin >> n >> m >> k;
        cout << fruitDiff(n, m, k) << endl;
    }

    return 0;
}