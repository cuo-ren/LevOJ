#include <stdio.h>
#include <string.h>

int main() {
	char s[101] = { 0 };
	int k;
	scanf("%d", &k);
	scanf("%s", s);
	int len = strlen(s);
	char output[101] = { 0 };
	for (int i = 0; i < len; i++) {
		output[i] = s[(i + k)%len];
	}
	printf("%s", output);
}
