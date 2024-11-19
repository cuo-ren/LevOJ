#include <stdio.h>
#include <string.h>

int main()
{
	char a[10001];
	char b[10001];
	int i, j=0;
	gets(a);
	for (i = 0; i < strlen(a); i++) {
		if (a[i] != '*') {
			break;
		}
		b[j++] = a[i];
	}
	for (; i < strlen(a); i++) {
		if (a[i] != '*') {
			b[j++] = a[i];
		}
	}
	b[j] = '\0';
	puts(b);
}
