#include<iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    while (n) {
        int arr[n];
        for (int i=0 ; i<n ; i++) {
            cin >> arr[i];
        }
        // logic goes here
        cin >> n;
    }
}