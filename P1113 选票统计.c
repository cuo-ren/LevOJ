#include <stdio.h>

int main()
{
	int a[1000] = { 0 };
	int b;
	while (1) {
		scanf("%d", &b);
		a[b - 1] += 1;
		if (b == -1) {
			break;
		}
	}

	for (int i = 0; i < 1000; i++) {
		if (a[i] != 0) {
			printf("%d %d\n", i + 1, a[i]);
		}
	}



}