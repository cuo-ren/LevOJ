#include <stdio.h>

int main()
{
	int a[500];
	int n, sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i1 = 0; i1 < n; i1++) {
		for (int i2 = i1+1; i2 < n; i2++) {
			if (a[i1] == -a[i2]) {
				sum++;
			}
		}
	}
	printf("%d", sum);
}