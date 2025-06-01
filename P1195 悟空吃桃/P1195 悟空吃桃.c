#include <stdio.h>

int main() {
	int m;
	while (scanf("%d", &m) != EOF) {
		int n = 1;
		m--;
		while (m--) {
			n++;
			n *= 2;
		}
		printf("%d\n", n);
	
	}
}
