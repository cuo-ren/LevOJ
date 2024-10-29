#include <stdio.h>

int main()
{
	int m, n;
	int m1[100];
	int n1[100];
	int output[200];

	scanf("%d", &m);
	scanf("%d", &n);

	for (int i = 0; i < m; i++) {
		scanf("%d", &m1[i]);
	}
	for (int i = 0; i < n; i++) {
		scanf("%d", &n1[i]);
	}

	/*int m2 = 0, n2 = 0;

	for (int i = 0; i < m + n; i++) {
		if (m1[m2] >= n1[n2]) {
			output[i] = n1[n2];
			n2++;
			if (n2 == n) {
				i++;
				for (; i < m + n; i++) {
					output[i] = m1[i - n2];
				}
				break;
			}
		}
		else {
			output[i] = m1[m2];
			m2++;
			if (m2 == m) {
				i++;
				for (; i < m + n; i++) {
					output[i] = n1[i - m2];
				}
				break;
			}
		}
	}
	
	for (int i = 0; i < m + n; i++) {
		printf("%d ", output[i]);
	}
	*/
	int m2 = 0, n2 = 0, k = 0;

	while (m2 < m && n2 < n) {
		if (m1[m2] <= n1[n2]) {
			output[k++] = m1[m2++];
		}
		else {
			output[k++] = n1[n2++];
		}
	}

	while (m2 < m) {
		output[k++] = m1[m2++];
	}

	while (n2 < n) {
		output[k++] = n1[n2++];
	}

	for (int i = 0; i < m + n; i++) {
		printf("%d ", output[i]);
	}
}

