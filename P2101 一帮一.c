#include <stdio.h>

int main()
{
	int n, flag;
	char name[50][9];
	int sex[50];
	int index[50] = { 0 };

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d%s", &sex[i], name[i]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j >= 0; j--) {
			if (sex[i] != sex[j] && index[i] != 1 && index[j] != 1) {
				printf("%s %s\n", name[i], name[j]);
				index[i] = 1;
				index[j] = 1;
			}
		}
	}
}
