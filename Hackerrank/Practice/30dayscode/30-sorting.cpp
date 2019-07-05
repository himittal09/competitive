#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sort (int* a, int n) {
    int numberOfSwaps = 0;
    
    for (int i = 0; i < n; i++) {
        // Track number of elements swapped during a single array traversal
        
        for (int j = 0; j < n - 1; j++) {
            // Swap adjacent elements if they are in decreasing order
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                numberOfSwaps++;
            }
        }
        
        // If no elements were swapped during a traversal, array is sorted
        if (numberOfSwaps == 0) {
            break;
        }
    }
    return numberOfSwaps;
}


int main() {
    int n, swaps;
    cin >> n;
    int arr[n];
    for (int i=0 ; i<n ; i++) {
        cin >> arr[i];
    }
    swaps = sort(arr, n);
    cout << "Array is sorted in " << swaps << " swaps.\n";
    cout << "First Element: " << arr[0] << endl;
    cout << "Last Element: " << arr[n-1];
    return 0;
}
