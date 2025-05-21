#include <stdio.h>
#include <string.h>
char a1[201], b1[201], c1[202], a2[201], b2[201], c2[202];
int main() {
	int n, j;

	char t = '0';
	///while (scanf("%d", &n) != EOF) {
	//	for (int i = 0; i < n; i++) {
			scanf("%s%s", a1, b1);
			t = '0';
			for (j = 0; j < strlen(a1); j++) {
				a2[strlen(a1) - 1 - j] = a1[j];
			}
			for (j = 0; j < strlen(b1); j++) {
				b2[strlen(b1) - 1 - j] = b1[j];
			}
			for (j = 0; j < ((strlen(a1) < strlen(b1)) ? strlen(a1) : strlen(b1)); j++) {
				c1[j] = (a2[j] + b2[j] + t - 48 - 48 - 48) % 10 + 48;
				t = (a2[j] + b2[j] - 48 - 48 + t - 48) / 10 + 48;
			}
			for (; j < ((strlen(a1) > strlen(b1)) ? strlen(a1) : strlen(b1)); j++) {
				c1[j] = (t - 48 + ((strlen(a1) > strlen(b1)) ? a2[j] : b2[j]) - 48) % 10 + 48;
				t = (((strlen(a1) > strlen(b1)) ? a2[j] : b2[j]) - 48 + t - 48) / 10 + 48;
			}
			if (t != '0') {
				c1[j++] = t;
			}
			c1[j] = '\0';
			for (j = 0; j < strlen(c1); j++) {
				c2[strlen(c1) - 1 - j] = c1[j];
			}
			c2[j] = '\0';
			printf("%s\n", c2);
	//	}
	//}
}
