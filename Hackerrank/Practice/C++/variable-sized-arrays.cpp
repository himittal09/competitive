#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q;
    cin >> n >> q;
    int* a[n];
    for (int i=0; i<n; i++) {
        int k, temp;
        cin >> k;
        int temp_arr[k];
        a[i] = temp_arr;
        for (int j=0 ; j<k ; j++) {
            cin >> temp;
            temp_arr[j] = temp;
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

