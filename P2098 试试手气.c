#include <stdio.h>

int main()
{
	int n;
	int a[6];
	for (int i = 0; i < 6; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &n);
	for (int i = 0; i < 6; i++) {
		a[i] = 6 >= a[i] && a[i] >= 6 - n + 1 ? 6 - n : 6 - n + 1;
	}
	for (int i = 0; i < 6; i++) {
		printf("%d ", a[i]);
	}

}