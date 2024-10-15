#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
	double p, s;
	while (scanf("%d%d%d", &a, &b, &c) != EOF) {
		if (a + b > c && b + c > a && a + c > b) {
			p = (a + b + c) / 2.0;
			s = sqrt(p * (p - a) * (p - b) * (p - c));
			printf("%.2lf\n", s);
		}
		else {
			printf("-1\n");
		}
	}
}
