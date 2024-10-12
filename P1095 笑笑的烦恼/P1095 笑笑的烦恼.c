#include <stdio.h>

int main()
{
	int t, input, min, max, sum, n;
	double a;
	
	scanf("%d", &t);
	getchar();

	for (int i = 0;i < t; i++) {
		n = 0;
		sum = 0;
		min = 100;
		max = 0;
		
		while (1) {
			scanf("%d", &input);
			if (input == -1) {
				getchar();
				break;
			}
			if (input > max) {
				max = input;
			}
			if (input < min) {
				min = input;
			}
			sum += input;
			n += 1;

		}
		a = (float)sum / n;
		printf("%d\n%d\n%d\n%.1f\n", n, max, min, a);
	}
}
