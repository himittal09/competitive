#include<bits/stdc++.h>
#include<iomanip>
#include<iostream>
using namespace std;

void print_arr (unsigned int* arr, int arrLen, int storeLength) {
    const int divisor = pow(10, storeLength);
    bool flag = false;
    for (int i=arrLen-1 ; i>=0 ; i--) {
        if (flag) {
            if (arr[i] == 0) {
                cout << "00";
            } else {
                cout << arr[i];
            }
        } else {
            if (arr[i] != 0) {
                flag = true;
                cout << arr[i];
                cout << setfill('0') << setw(storeLength);
            }
        }
    }
    cout << endl;
}

void large_fact (int num, int arrLen, int storeLength) {
    const int divisor = pow(10, storeLength);
    
    unsigned int temp, toAddLast;
    
    unsigned int arr[arrLen] = { 0 };
    arr[0] = 1;

    print_arr(arr, arrLen, storeLength);
    cout << num;

    for (int i=2 ; i <= num ; i++) {
        for (int j=0 ; j < arrLen - 1 ; j++) {
            temp = arr[j] * i;
            temp = temp + toAddLast;
            arr[j] = temp % divisor;
            toAddLast = temp / divisor;
            if (toAddLast == 0 && arr[j+1] == 0) {
                break;
            }
        }
    }

    print_arr(arr, arrLen, storeLength);
}

int main () {

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        large_fact(n, 100, 2);
    }

    // large_fact(15, 100, 2);

    return 0;
}