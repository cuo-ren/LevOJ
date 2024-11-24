#include <stdio.h>

int main()
{
	int m, n, q;
	int c, t, sum = 0;
	int map[100][100] = { 0 };
	scanf("%d%d%d", &n, &m, &q);
	for (int i = 0; i < q; i++) {
		scanf("%d%d", &t, &c);
		if (t) {
			for (int j = 0; j < n; j++) {
				map[j][c - 1] = 1;
			}
		}
		else {
			for (int j = 0; j < m; j++) {
				map[c - 1][j] = 1;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (map[i][j] == 0) {
				sum++;
			}
		}
	}
	printf("%d", sum);
}