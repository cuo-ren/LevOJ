#include <stdio.h>

int main()
{
	double n, L, bmi;

	while (scanf("%lf%lf", &n, &L) != EOF) {
		bmi = (double)n / (L * L);

		printf("%.1lf\n", bmi);

		if (bmi > 25) {
			printf("PANG\n");
		}
		else
		{
			printf("Hai Xing\n");
		}
	}
}
