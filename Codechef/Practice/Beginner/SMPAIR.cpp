#include<iostream>
using namespace std;

void swap (int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void minMax (int* a, int* b, int* temp) {
    if (*temp < *a) {
        swap (a, temp);
    }
    if (*temp < *b) {
        swap (b, temp);
    }
}

int main () {
    int t, n, small, nextSmall, temp;
    cin >> t;
    while (t--) {
        small=INT_MAX;
        nextSmall=INT_MAX;
        cin >> n;
        for (int i=0 ; i<n ; i++) {
            cin >> temp;
            minMax (&small, &nextSmall, &temp);
        }
        cout << small + nextSmall << endl;
    }
}