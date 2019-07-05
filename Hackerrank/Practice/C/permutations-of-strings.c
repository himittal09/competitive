#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap (char* a, char* b) {
    char* temp = a;
    a = b;
    b = temp;
}

void reverse(char **s,int x, int y) {
    while (x < y) {
        swap(s[x], s[y]);
        x++;
        y--;
    }
}

int next_permutation(int n, char **s)
{
    int k = n-1;
    while(k>0 && strcmp(s[k-1],s[k])>=0) {
        k--;
    }
    if (k <= 0) {
        return 0;
    }

    int l = n-1;
    while(strcmp(s[k-1],s[l])>=0) {
        l--;
    }

    swap (s[l], s[k]);
    reverse (s, k+1, n-1);
    return 1;
}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int k = 0; k < n; k++)
	{
		s[k] = calloc(11, sizeof(char));
		scanf("%s", s[k]);
	}
	do
	{
		for (int k = 0; k < n; k++)
			printf("%s%c", s[k], k == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int k = 0; k < n; k++)
		free(s[k]);
	free(s);
	return 0;
}