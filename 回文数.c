#include <stdio.h>

int main()
{
	int n, a, b;
	while (scanf_s("%d", &n) != EOF) {
		a = n;
		b = 0;
		while (n) {
			b *= 10;
			b += n % 10;
			n /= 10;
		}
		if (a == b) {
			printf("yes\n");
		}
		else {
			printf("no\n");
		}
	}


}