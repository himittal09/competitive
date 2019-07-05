#include <stdio.h>

int main() {
    int arr_len, i, temp;
    unsigned long sum=0;
    scanf("%d", &arr_len);
    for (i=0;i<arr_len;i++) {
        scanf("%d", &temp);
        sum=sum+temp;
    }
    printf("%lu", sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}