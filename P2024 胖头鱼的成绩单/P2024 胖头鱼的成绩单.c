#include <stdio.h>

int main()
{
	int k, flag, m;
	int score[30];

	scanf("%d", &k);

	for (int i = 0; i < k; i++) {
		scanf("%d", &score[i]);
	}

	for (int i1 = 0; i1 < k - 1; i1++) {
		flag = 1;
		for (int i2 = 0; i2 < k - 1 - i1; i2++) {
			if (score[i2] > score[i2 + 1]) {
				m = score[i2]; score[i2] = score[i2 + 1]; score[i2 + 1] = m;
				flag = 0;
			}
		}
		if (flag) {
			break;
		}
	}

	for (int i = k-1; i >= 0; i--) {
		if (score[i] >= 70) {
			printf("%d\n", score[i]);
		}
		else {
			return 0;
		}
	}
}
