#include <stdio.h>

int main()
{
	int m1, m2, n1, n2, N, a1, a2, b1, b2;
	m2 = 0;//A���˼���
	n2 = 0;//B���˼���

	scanf_s("%d%d", &m1, &n1);
	m1++;
	n1++;
	scanf_s("%d", &N);

	for (int i = 1; i <= N; i++) {
		scanf_s("%d%d%d%d", &a1, &a2, &b1, &b2);
		if ((a2 == a1 + b1) && (b2 == a1 + b1)) {
			continue;
		}
		if (a2 == a1 + b1) {
			m2++;
		}
		if (b2 == a1 + b1) {
			n2++;
		}
		if (m1 == m2) {
			printf("A\n");
			printf("%d\n", n2);
			return 0;
		}
		if (n1 == n2) {
			printf("B\n");
			printf("%d\n", m2);
			return 0;
		}
	}
}