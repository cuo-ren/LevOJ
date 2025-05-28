#include <iostream>
using namespace std;

int r[100][100] = { 0 };
int g[100][100] = { 0 };
int b[100][100] = { 0 };

int main() {
	int n, m, count = 1;
	while (1) {
		cin >> n >> m;
		if (m == 0 and n == 0) {
			return 0;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> r[i][j];
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> g[i][j];
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> b[i][j];
			}
		}
		cout << "Case " << count << ':' << '\n';
		for (int i = 0; i < n; i++) {
			int j;
			for (j = 0; j < m-1; j++) {
				cout << (r[i][j] + g[i][j] + b[i][j]) / 3 << ',';
			}
			cout << (r[i][j] + g[i][j] + b[i][j]) / 3 << '\n';
		}
		count++;
	}
}
