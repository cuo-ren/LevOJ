#include <stdio.h>

int main()
{
	long long name[10][3];
	int n, m, t;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lld%lld%lld", &name[i][0], &name[i][1], &name[i][2]);
	}
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &t);
		for (int j = 0; j < n; j++) {
			if (name[j][1] == t) {
				printf("%lld %lld\n", name[j][0], name[j][2]);
			}
		}
	}
}
