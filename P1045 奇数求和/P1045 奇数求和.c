#include <stdio.h>

int main()
{
	int sum = 0, t;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &t);
		if (t % 2) {
			sum += t;
		}
	}
	printf("%d", sum);

}
