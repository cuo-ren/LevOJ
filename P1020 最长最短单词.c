#include <stdio.h>

int main() {

	char a[500][500];
	int i = 0, k = 0;
	char b;
	int s[500];
	int t = 0;

	while (1) {
		scanf("%c", &b);
		if (b == ' ') {
			a[i][k] = '\0';
			s[i] = t;
			i++;
			k = 0;
			t = 0;
			continue;
		}
		if (b == '\n') {
			a[i][k] = '\0';
			s[i] = t;
			break;
		}
		a[i][k++] = b;
		t++;
	}

	int max = 0,min = 500;
	int max_index, min_index;

	for (int l = 0; l <= i; l++) {
		if (max < s[l]) {
			max = s[l];
			max_index = l;
		}
		if (min > s[l]) {
			min = s[l];
			min_index = l;
		}
	}
	printf("%s\n%s", a[max_index], a[min_index]);

}