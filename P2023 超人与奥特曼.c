#include <stdio.h>

int main()
{
	int n, x = 0, y = 0;
	int num[100];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}

	int i = 0, j = n - 1;
	while (i <= j) {
		if (x == y && i == j) {
			x += num[i];
			break;
		}
		if (x > y) {
			y += num[j--];
		}
		else if (x < y) {
			x += num[i++];
		}
		else {
			x += num[i++];
			y += num[j--];
		}
	}

	printf("%d %d", x, y);
}