#include <stdio.h>
#include <math.h>

int main()
{
	int n, min_index;
	double avg2 = 0, min = 100;
	char name[10][9];
	int score[10];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s%d", name[i], &score[i]);
		avg2 += score[i];
	}
	avg2 /= n * 2;
	for (int i = 0; i < n; i++) {
		if (fabs(score[i] - avg2) < min) {
			min = fabs(score[i] - avg2);
			min_index = i;
		}
	}
	printf("%d %s", (int)avg2, name[min_index]);
}
