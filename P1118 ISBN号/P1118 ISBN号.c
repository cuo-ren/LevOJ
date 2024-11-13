#include <stdio.h>

int main()
{
	int a[10];
	int n, sum;
	char t;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		sum = 0;
		for (int i2 = 0; i2 < 10; ) {
			scanf("%c", &t);
			if (t >= 48 && t <= 57) {
				a[i2++] = t - 48;
			}
		}
		for (int i2 = 1; i2 < 10; i2++) {
			sum += a[i2 - 1] * i2;
		}
		sum %= 11;
		if (sum == a[9]) {
			printf("Right\n");
		}
		else {
			printf("%d-%d%d%d-%d%d%d%d%d-%d\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], sum);
		}
	}
}
