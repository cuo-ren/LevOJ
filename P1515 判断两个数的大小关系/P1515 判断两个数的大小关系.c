#include <stdio.h>

int main()
{
	int x, y;
	scanf("%d%d", &x, &y);
	
	if (x > y) {
		printf("x>y\n");
	}
	else if (x == y)
	{
		printf("x==y\n");
	}
	else
	{
		printf("x<y\n");
	}
}
