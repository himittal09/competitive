#include<iostream>
using namespace std;

int gcd(int* arr, int len, int minItem) {
    int gcd=1, factor=2;
    while(true) {
        int i=0;
        for(i=0 ; i<len ; i++) {
            if (arr[i] % (gcd * factor) != 0) {
                factor++;
                break;
            }
        }
        if (i == len) {
            gcd = gcd * factor;
        }
        if (factor > minItem) {
            break;
        }
    }
    return gcd;
}

int gcdTwo(int a, int b) { 
    if (a == 0) 
        return b; 
    return gcdTwo(b % a, a); 
} 

int findGCD(int arr[], int n) {
    int result = arr[0]; 
    for (int i = 1; i < n; i++) 
        result = gcdTwo(arr[i], result); 
  
    return result; 
} 

int main () {
    int t, n, gcd;
    cin >> t;
    while (t--) {
        cin >> n;
        int arr[n];
        for (int i=0 ; i<n ; i++) {
            cin >> arr[i];
        }
        gcd = findGCD(arr, n);
        if (gcd == 1) {
            // print array
        } else {
            // divide array by gcd and print
        }
    }
}