#include <stdio.h>

int main()
{
	int a[20][20];
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i >= j) {
				a[i][j] = j + 1;
			}
			else {
				a[i][j] = i + 1;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-1; j++) {
			printf("%d ", a[i][j]);
		}
		printf("%d\n",a[i][n-1]);
	}
}