#include <stdio.h>

int main()
{
	int a, b, c, x, y;
	
	while (scanf("%d%d", &a, &b) != EOF) {
		getchar();
		x = a;
		y = b;
		if (a < b) {
			c = a;
			a = b;
			b = c;
		}
		while (b != 0) {
			c = a % b;
			a = b;
			b = c;
		}
		y = x * y / a;
		x = a;
		printf("%d\n%d\n", x, y);
	}
}
