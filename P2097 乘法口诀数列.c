#include <stdio.h>

int main()
{
	int a[10];
	int a1, a2, n, t, j = 2;
	scanf("%d%d%d", &a1, &a2, &n);
	a[0] = a1; a[1] = a2;
	for (int i = 0; i < n; i++) {
		if (j >= n) {
			break;
		}
		t = a[i] * a[i + 1];
		if (t < 10) {
			a[j++] = t;
		}
		else {
			a[j++] = t / 10;
			if (j >= n) {
				break;
			}
			a[j++] = t % 10;
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}

}