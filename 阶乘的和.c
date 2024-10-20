#include <stdio.h>

int main()
{
	int m, n, x;

	while (scanf_s("%d", &n) != EOF) {
		x = 1;
		getchar();
		if (n == 0) {
			printf("1\n");
			continue;
		}
		for (int i1 = 1; i1 <= n; i1++) {
			m = 1;
			for (int i2 = 1; i2 <= i1; i2++) {
				m *= i2;
			}
			x += m;
		}
		printf("%d\n", x);
	}


}