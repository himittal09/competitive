#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c, int* memo) {
  //Write your code here.
    if (memo[n]) {
        return memo[n];
    } else if (n == 1) {
        memo[n] = a;
    } else if (n == 2) {
        memo[n] = b;
    } else if (n == 3) {
        memo[n] = c;
    } else {
        memo[n] = find_nth_term(n-1, a, b, c, memo) + find_nth_term(n-2, a, b, c, memo) + find_nth_term(n-3, a, b, c, memo);
    }
    return memo[n];
}

int main() {
    int n, a, b, c, ans, *memo;
    scanf("%d %d %d %d", &n, &a, &b, &c);

    memo = (int*)calloc(n+1, sizeof(int));

    ans = find_nth_term(n, a, b, c, memo);
 
    printf("%d", ans); 

    free(memo);

    return 0;
}