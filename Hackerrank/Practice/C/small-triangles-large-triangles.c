#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

int heron (triangle* tr) {
	int a=tr->a, b=tr->b, c=tr->c;
	return (a+b+c)*(b+c-a)*(a+c-b)*(a+b-c);
}

int comparator(const void *p, const void *q) { 
	return heron((triangle*)p)-heron((triangle*)q);
} 

void sort_by_area(triangle* tr, int n) {
    qsort(tr, n, sizeof(*tr), comparator);
}

int main()
{
	int n, sp;
	scanf("%d", &n);
	triangle *tr = (triangle*)malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
