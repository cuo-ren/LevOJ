#include <stdio.h>

int main()
{
	int a[20][20];
	int n;
	int i1 = -1, i2 = 0, count = 1, count2 = 0;
	scanf("%d", &n);

	while (count < n * n + 1) {
		for (i1++; i1 < n - count2 && count < n * n + 1; i1++) {
			a[i2][i1] = count++;
		}
		i1--;
		for (i2++; i2 < n - count2 && count < n * n + 1; i2++) {
			a[i2][i1] = count++;
		}
		i2--;
		for (i1--; i1 >= 0 + count2 && count < n * n + 1; i1--) {
			a[i2][i1] = count++;
		}
		i1++;
		for (i2--; i2 >= 1 + count2 && count < n * n + 1; i2--) {
			a[i2][i1] = count++;
		}
		i2++;
		count2++;
	}

	for (int j1 = 0; j1 < n; j1++) {
		for (int j2 = 0; j2 < n; j2++) {
			printf("%d ", a[j1][j2]);
		}
		printf("\n");
	}
}
