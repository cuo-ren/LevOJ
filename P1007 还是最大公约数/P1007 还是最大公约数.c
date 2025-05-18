#include <stdio.h>

int gcd(int x, int y) {
	if (x < y) {
		int t = x; x = y; y = t;
	}
	while (y != 0) {
		int temp = x % y;
		x = y;
		y = temp;
	}
	return x;
}

int main() {
	int a, b, c, t;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d%d", &a, &b, &c);
		printf("%d\n", gcd(gcd(a, b), c));
	}
}
