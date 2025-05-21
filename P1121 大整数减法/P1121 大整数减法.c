#include <stdio.h>
#include <string.h>

int main()
{
	char a1[201], a2[201], b1[201], b2[201], c1[201], c2[201];
	int t;
	int i;
	
		scanf("%s%s", a1, b1);
		t = 0;
		for (i = 0; i < strlen(a1); i++) {
			a2[strlen(a1) - 1 - i] = a1[i];
		}
		for (i = 0; i < strlen(b1); i++) {
			b2[strlen(b1) - 1 - i] = b1[i];
		}
		for (; i < strlen(a1); i++) {
			b2[i] = '0';
		}
		for (i = 0; i < strlen(a1); i++) {
			if (a2[i] - b2[i]-t < 0) {
				c1[i] = a2[i] - b2[i] + 10 - t + '0';
				t = 1;
			}
			else {
				c1[i] = a2[i] - b2[i] - t + '0';
				t = 0;
			}
		}
		c1[i] = '\0';
		for (i = 0; i < strlen(c1); i++) {
			c2[strlen(c1) - 1 - i] = c1[i];
		}
		c2[i] = '\0';
		for (i = 0; i < strlen(c2); i++) {
			if (c2[i] != '0') {
				break;
			}
		}
		for (; i < strlen(c2); i++) {
			printf("%c", c2[i]);
		}
		printf("\n");
	
	
}
