#include <stdio.h>

void calculate_the_maximum(int n, int k) {
  register int i, j, maxAnd=0, maxOr=0, maxXor=0, temp;
  for (i=1 ; i<n ; i++) {
      for (j=i+1 ; j<=n ; j++) {
          temp = i & j;
          if (temp > maxAnd && temp < k) {
              maxAnd = temp;
          }
          temp = i | j;
          if (temp > maxOr && temp < k) {
              maxOr = temp;
          }
          temp = i ^ j;
          if (temp > maxXor && temp < k) {
              maxXor = temp;
          }
      }
  }
  printf("%d\n%d\n%d", maxAnd, maxOr, maxXor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
