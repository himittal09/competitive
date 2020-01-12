#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main () {
    unsigned int n, i, q, p1, p2, count;
    scanf("%d", &n);
    unsigned int arr[n];
    for (i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(unsigned int), cmpfunc);
    scanf("%d", &q);
    while (q--) {
        scanf("%d %d", &p1, &p2);
        count=i=0;
        while (i < n && arr[i]<p1) {
            i++;
        }
        while (i < n && arr[i]<=p2) {
            count += arr[i++];
        }
        printf("%d\n", count);
    }
}