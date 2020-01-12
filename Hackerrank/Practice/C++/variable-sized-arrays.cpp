#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    int* a[n];
    for (int i=0; i<n; i++) {
        int k;
        cin >> k;
        a[i] = new int[k];
        for (int j=0 ; j<k ; j++) {
            cin >> a[i][j];
        }
    }
    while (q--) {
        int i, j;
        cin >> i >> j;
        printf("%d\n", a[i][j]);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

