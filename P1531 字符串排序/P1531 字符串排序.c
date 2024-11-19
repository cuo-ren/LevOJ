#include <stdio.h>
#include <string.h>

int main()
{
	char a[10][101];
	int n;
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++) {
		gets(a[i]);
	}

	int flag;
	char t[101];
	for (int i = 0; i < n - 1; i++) {
		flag = 1;
		for (int j = 0; j < n - i - 1; j++) {
			if (strcmp(a[j], a[j + 1]) > 0) {
				strcpy(t, a[j]); strcpy(a[j], a[j+1]); strcpy(a[j+1], t);
			}
			flag = 0;
		}
		if (flag) {
			break;
		}
	}

	for (int i = 0; i < n; i++) {
		puts(a[i]);
	}
}
