#include <bits/stdc++.h>
using std::vector;
using std::cin;
using std::cout;

int main () {
    unsigned int n, temp, count=0;
    cin >> n;
    vector <unsigned int> myvec;
    while (n--) {
        cin >> temp;
        if (temp & 3) {
            myvec.push_back(temp);
        }
    }
    n = myvec.size();
    for (int i=0; i<n; i++) {
        if (myvec[i] & 1) {
            count += n - 1 - i;
            continue;
        }
        for (int j=i+1; j<n; j++) {
            count += myvec[j] & 1;
        }
    }
    cout << count;
    return 0;
}