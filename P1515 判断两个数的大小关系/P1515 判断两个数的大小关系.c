#include <stdio.h>

int main()
{
	int x, y;
	scanf("%d%d", &x, &y);
	
	if (x > y) {
		printf("x>y");
	}
	else if (x == y)
	{
		printf("x==y");
	}
	else
	{
		printf("x<y");
	}
}
