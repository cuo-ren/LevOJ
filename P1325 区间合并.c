#include <stdio.h>

int main()
{
	int a[99999] = { 0 };
	int n, min, max;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &min);
		scanf("%d", &max);
		min *= 2;
		max = max * 2 - 2;
		for (; min <= max; min++) {
			a[min - 1] = 1;
		}
	}


	int flag = 0;
	for (int i = 0; i < 99999; i++) {
		if (a[i] == 0) {
			if (flag) {
				printf("%d %d\n", (min + 1) / 2, (max + 3) / 2);
			}
			min = i + 2;
			flag = 0;
		}
		else {
			max = i + 1;
			flag = 1;
		}
	}

}