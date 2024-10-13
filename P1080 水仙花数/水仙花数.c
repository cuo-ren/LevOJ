#include <stdio.h>

int main()
{
	int x, y, z, b, c;
	for (int a = 100;a < 1000;a++) {
		b = a;
		c = a;
		x = b % 10;
		b = (b - x) / 10;
		y = b % 10;
		b = (b - y) / 10;
		z = b % 10;
		if (c == x * x * x + y * y * y + z * z * z) {
			printf("%d\n", c);
		}
	}


}