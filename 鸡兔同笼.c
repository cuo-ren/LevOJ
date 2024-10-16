#include <stdio.h>

int main() 
{
	int m, n, a, b;

	while (scanf_s("%d%d", &m, &n) != EOF) {
		getchar();
		b = (n - 2 * m) / 2;
		a = (4 * m - n) / 2;
		if (a >= 0 && b >= 0 && ((n - 2 * m) % 2 == 0) && ((4 * m - n) % 2 == 0)) {
			printf("%d %d\n", a, b);
		}
		else {
			printf("-1 -1\n");
		}
	}

}