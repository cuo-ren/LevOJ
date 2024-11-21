#include <stdio.h>
char a[1000001];
int indexs[10000] = { 0 };

int main()
{
	int m, n, len, record = 0, index = 0;
	
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &len);
		record += len;
		indexs[i+1] = record;
		getchar();
		for (int j = 0; j < len; j++) {
			a[index++] = getchar();
		}
	}
	for (int i = 0; i < m; i++) {
		scanf("%d", &index);
		for (int j = indexs[index-1]; j < indexs[index]; j++) {
			putchar(a[j]);
		}
		printf("\n");
	}
}
