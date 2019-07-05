#include <stdio.h>

inline int max (int a, int b) {
    return a > b ? a : b;
}

inline int abs (int a) {
    return a > 0 ? a : -a;
}

void print_pattern(int n) {

    for (int i = -n + 1; i < n; i++) {
        for (int j = -n + 1; j < n; j++) {
            printf("%d ", max(abs(i), abs(j)) + 1);
        }
        printf("\n");
    }

}

int main() {
    int n;
  
    scanf("%d", &n);
    print_pattern(n);
 
    return 0;
}
