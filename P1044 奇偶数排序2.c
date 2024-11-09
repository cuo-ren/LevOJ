#include <stdio.h>

int main()
{
	int j[10], o[10];
	int sumj = 0, sumo = 0, t, flag;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &t);
		if (t % 2 == 1) {
			j[sumj++] = t;
		}
		else {
			o[sumo++] = t;
		}
	}
	for (int i = 0; i < sumj - 1; i++) {
		flag = 1;
		for (int i2 = 0; i2 < sumj - 1 - i; i2++) {
			if (j[i2] < j[i2 + 1]) {
				t = j[i2]; j[i2] = j[i2 + 1]; j[i2 + 1] = t;
				flag = 0;
			}
		}
		if (flag) {
			break;
		}
	}
	for (int i = 0; i < sumo - 1; i++) {
		flag = 1;
		for (int i2 = 0; i2 < sumo - 1 - i; i2++) {
			if (o[i2] > o[i2 + 1]) {
				t = o[i2]; o[i2] = o[i2 + 1]; o[i2 + 1] = t;
				flag = 0;
			}
		}
		if (flag) {
			break;
		}
	}
	for (int i = 0; i < sumj; i++) {
		printf("%d ", j[i]);
	}
	for (int i = 0; i < sumo; i++) {
		printf("%d ", o[i]);
	}

}