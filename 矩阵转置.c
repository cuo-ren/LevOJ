#include <stdio.h>

int main()
{
	int n;
	int a[100][100] = { 0 };
	int b[100][100] = { 0 };

	scanf("%d", &n);

	for (int i1 = 0; i1 < n; i1++) {
		for (int i2 = 0; i2 < n; i2++) {
			scanf("%d", &a[i1][i2]);
		}
	}

	for (int i1 = 0; i1 < n; i1++) {
		for (int i2 = 0; i2 < n; i2++) {
			b[i2][i1] = a[i1][i2];
		}
	}

	for (int i1 = 0; i1 < n; i1++) {
		for (int i2 = 0; i2 < n-1; i2++) {
			printf("%d ", b[i1][i2]);
		}
		printf("%d\n",b[i1][n-1]);
	}
}