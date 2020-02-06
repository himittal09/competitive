#include <stdio.h>

unsigned int countSetBits (unsigned int n) {
    unsigned int count=0;
    while (n) {
        count += n & 1;
        n = n >> 1;
    }
    return count;
} //correct

void integerToBinary (unsigned int n) { 
    if (n > 1) {
        integerToBinary(n>>1); 
    }
    printf("%d ", n & 1); 
} //correct

unsigned int toggleBitsFromLToR(unsigned int n, unsigned int l, unsigned int r) { 
    unsigned int num = ((1 << r) - 1) ^ ((1 << (l - 1)) - 1);
    integerToBinary(num);
    printf("\n");
    return (n ^ num);
}
/**
1 0 1 0 1 0 
1 1 0 0 1 0 
1 0 1 1 0 0 
*/

int main () {
    unsigned int n, q, l, r, hb=0, i, temp, num=0;
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &temp);
        num = num | (temp << (n-i-1));
    }
    scanf("%d", &q);
    while (q--) {
        scanf("%d %d", &l, &r);
        num = toggleBitsFromLToR(num, l, r);
        // integerToBinary(num);
        // printf("\n");
    }
    printf("%d\n", countSetBits(num));
    integerToBinary(num);
}