#include <stdio.h>

int map[8][8] = { 0 };
int l[8] = { 0 };
int r[8] = { 0 };
int lr[16] = { 0 };
int fr[16] = { 0 };

int dfs(int x,int count) {
	if (x == 8) {
		return count + 1;
	}
	if (l[x]) {
		count = dfs(x + 1, count);
		return count;
	}
	for (int i = 0; i < 8; i++) {
		if ( r[i] || lr[i - x + 8] || fr[i + x]) {
			continue;
		}
		r[i] = 1;
		lr[i - x + 8] = 1;
		fr[i + x] = 1;
		count = dfs(x + 1, count);
		r[i] = 0;
		lr[i - x + 8] = 0;
		fr[i + x] = 0;
	}
	return count;
}

int main() {


	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			scanf("%d", &map[i][j]);
			if (map[i][j]) {
				l[i] = 1;
				r[j] = 1;
				lr[j - i + 8] = 1;
				fr[i + j] = 1;
			}
		}
	}

	printf("%d", dfs(0, 0));
}

