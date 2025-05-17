#include <stdio.h>

int ysf(int numbers,int k,int i) { 
	if (i == 1) {
		return (k - 1) % numbers + 1;
	}
	return (ysf(numbers - 1, k, i - 1) + k - 1) % numbers + 1;
}

int next_k(int k, int number) {
	if (number % k == 0) {
		return k + number / 2 + 1;
	}
	else {
		return k + 1;
	}
}

int main() {
	int m;
	scanf("%d", &m);
	int numbers = m * 2;
	int k = m + 1;
	for (int i = 0; i < m; i++) {
		if (ysf(numbers, k, i + 1) <= m) {
			i = -1;
			k = next_k(k, numbers);
			continue;
		}
	}
	printf("%d", k);
}
