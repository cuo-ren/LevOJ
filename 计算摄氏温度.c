#include <stdio.h>

int main()
{
	double c, f;
	scanf("%lf", &f);
	c = 5 * (f - 32) / 9;
	printf("Celsius = %d", (int)c);

}