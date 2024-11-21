#include <stdio.h>

char a[100][20001];

int main()
{
	
	int index[100];
	int m, n;
	int x, y, t;

	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%s", a[i]);
		index[i] = i;
	}
	for (int i = 0; i < m; i++) {
		scanf("%d%d", &x, &y);
		t = index[x - 1]; index[x - 1] = index[y - 1]; index[y - 1] = t;
	}
	for (int i = 0; i < n; i++) {
		printf("%s\n", a[index[i]]);
	}
}