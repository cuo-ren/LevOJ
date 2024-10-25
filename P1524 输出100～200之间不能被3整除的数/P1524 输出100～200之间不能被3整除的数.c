#include <stdio.h>

int main()
{
	int n = 0;
	for (int i = 100; i <= 200; i++) {
		if (i % 3 != 0) {
			n += 1;
			if (n == 6) {
				n = 0;
				printf("%6d\n", i);
			}
			else {
				printf("%6d", i);
			}
		}
	}
	if (n != 0) {
		printf("\n");
	}
}
