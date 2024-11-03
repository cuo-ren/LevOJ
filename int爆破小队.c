#include <stdio.h>

int main()
{
	int n, t, a;
	t = 0;
	long long total = 0;

	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a);
		t++;
		total += a;
		if (total > 2147483647 || total < -2147483648) {
			printf("%d", t);
			return 0;
		}
	}
	printf("0");
}