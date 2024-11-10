#include <stdio.h>

int main()
{
	int n, t;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &t);
		if (i == n / 2) {
			printf("%d", t);
		}
	}

}