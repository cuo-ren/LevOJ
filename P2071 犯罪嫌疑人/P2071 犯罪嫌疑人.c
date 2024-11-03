#include <stdio.h>
#include <math.h>

int main()
{
	int n, a, b;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &a);
		b = sqrt(a);
		if (a == b * b) {
			printf("%d", b);
			return 0;
		}
	}
}
