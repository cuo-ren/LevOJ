#include <stdio.h>

int main()
{
	int n, k, flag, break_flag = 1;
	int ans[100];
	int guess;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &ans[i]);
	}

	scanf("%d", &k);
	for (int i = 0; i < k; i++) {
		flag = 0;
		break_flag = 1;
		for (int j = 0; j < n; j++) {
			scanf("%d", &guess);
			if (guess != 0 && guess != ans[j]) {
				flag = 0;
				break_flag = 0;
			}
			if (guess == ans[j] && break_flag) {
				flag = 1;
			}
		}
		if (flag) {
			printf("Da Jiang!!!\n");
		}
		else {
			printf("Ai Ya\n");
		}
	}
}