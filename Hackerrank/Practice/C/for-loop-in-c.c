#include <stdio.h>

static const char *strings[] = {"one","two","three","four","five","six","seven","eight","nine"};

int main () {
    int a, b, i;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    for (i=a; i<=b; i++)  {
        if (i<10) {
            printf(strings[i-1]);
            printf("\n");
        } else {
            if (i & 1 == 0) {
                printf("even\n");
            } else {
                printf("odd\n");
            }
        }
    }
    return 0;
}