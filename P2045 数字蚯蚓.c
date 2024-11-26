#include <stdio.h>

int main()
{
	char str[100];
	int n;
	gets(str);
	scanf("%d", &n);
	for (int i = 0; i < 100; i++) {
		if (str[i] == '\0') {
			break;
		}
		if (i < n) {
			putchar(str[i]);
		}
		else {
			putchar(str[n - 1]);
		}
	}
	printf("\n");
	for (int i = 0; i < 100; i++) {
		if (str[i] == '\0') {
			break;
		}
		if (i < n) {
			putchar(str[n]);
		}
		else {
			putchar(str[i]);
		}
	}
}