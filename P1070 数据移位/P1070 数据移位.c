#include <stdio.h>

int main()
{
	int n[200];
	int k, n1;
	scanf("%d", &n1);
	scanf("%d", &k);
	for (int i = 0; i < n1; i++) {
		scanf("%d", &n[i]);
	}
	for (int i = 0; i < k; i++) {
		n[n1 + i] = n[i];
	}
	for (int i = 0; i < n1; i++) {
		n[i] = n[i+k];
	}
	for (int i = 0; i < n1; i++) {
		printf("%d\n", n[i]);
	}
}
