#include <stdio.h>
#include <stdlib.h>

void swap (int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse_array (int* arr, int n) {
    int i, temp;
    for (int i=0 ; i<n/2 ; i++) {
        swap(arr+i, arr+n-i-1);
    }
}

int main() {
    int n, i;
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    
    for (i=0 ; i<n ; i++) {
        scanf("%d", arr+i);
    }

    reverse_array(arr, n);

    for (i=0 ; i<n ; i++) {
        printf("%d ", *(arr+i));
    } 

    return 0;
}