#include <stdio.h>

int main()
{
	int n;
	while (scanf("%d", &n) != EOF) {
		getchar();
		switch (n)
		{
		case 0:	printf("1\n"); break;
		case 1:	printf("2\n"); break;
		case 2:	printf("4\n"); break;
		case 3:	printf("10\n"); break;
		case 4:	printf("34\n"); break;
		case 5:	printf("154\n"); break;
		case 6:	printf("874\n"); break;
		case 7:	printf("5914\n"); break;
		case 8:	printf("46234\n"); break;
		case 9:	printf("409114\n"); break;
		case 10:	printf("4037914\n"); break;
		case 11:	printf("43954714\n"); break;
		case 12:	printf("522956314\n"); break;
		default:
			break;
		}
	}
}
