#include <stdio.h>
#include <math.h>

void func(int a[][81], int size, int x, int y) {
	if (size == 1) {
		a[x][y] = 1;
		return;
	}
	func(a, size - 1, x, y);
	func(a, size - 1, x, y + pow(3, size - 1) / 3 * 2);
	func(a, size - 1, x + pow(3, size - 1) / 3, y + pow(3, size - 1) / 3);
	func(a, size - 1, x + pow(3, size - 1) / 3 * 2, y);
	func(a, size - 1, x + pow(3, size - 1) / 3 * 2, y + pow(3, size - 1) / 3 * 2);
}

int main() {
	int a[81][81] = { 0 };
	int n;
	scanf("%d", &n);
	func(a, n, 0, 0);
	for (int i = 0; i < pow(3, n - 1); i++) {
		for (int k = 0; k < pow(3, n - 1); k++) {
			if (a[i][k] == 1) {
				printf("X");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}
