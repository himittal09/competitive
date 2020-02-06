#include <iostream>
using namespace std;

void merge (int arr[], int l, int m, int r) { 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    int L[n1], R[n2]; 
  
    for (int i = 0; i < n1; i++) {
        L[i] = arr[l + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[m + 1+ j]; 
    }
  
    int i = 0;
    int j = 0;
    int k = l;
    
    while (i < n1 && j < n2) { 
        if (L[i] <= R[j]) { 
            arr[k++] = L[i++]; 
        } else { 
            arr[k++] = R[j++];
        } 
    } 
  
    while (i < n1) { 
        arr[k++] = L[i++]; 
    } 
  
    while (j < n2) { 
        arr[k++] = R[j++];
    } 
} 
  
void mergeSort(int arr[], int l, int r) { 
    if (l < r) { 
        int m = l+(r-l)/2; 
  
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 


int main () {

    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    unsigned int t;
    cin >> t;
    int arr[t];
    for (int i=0 ; i<t ; i++) {
        cin >> arr[i];
    }
    mergeSort(arr, 0, t-1);
    for (int i = 0; i < t; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}