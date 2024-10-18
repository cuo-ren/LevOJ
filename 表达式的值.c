#include <stdio.h>

int main()
{
	int a;
	double x, y;

	while (scanf_s("%d%lf%lf", &a, &x, &y) != EOF) {
		printf("%.6lf\n", x + a % 3 * (int)(x + y) % 2 / 4);
	}
}