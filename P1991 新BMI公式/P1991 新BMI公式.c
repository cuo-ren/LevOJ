#include <stdio.h>

int main()
{
	double n, L, bmi;

	scanf("%lf%lf", &n, &L);
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
