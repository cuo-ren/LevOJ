#include <iostream>
using namespace std;

bool lights[1001] = { 0 };//1为开 0为关

int main() {
	int n, k;
	while (cin >> n >> k) {
		if (k == 0) {
			for (int i = 1; i < n; i++) {
				if (!lights[i]) {
					cout << i << ' ';
				}
			}
			cout << n << '\n';
			continue;
		}
		for (int i = 1; i <= n; i++) {
			lights[i] = false;
		}
		for (int i = 1; i <= k; i++) {
			for (int j = i; j <= n; j += i) {
				lights[j] = !lights[j];
			}
		}
		int i;
		for (i = 1; i <= n; i++) {
			if (!lights[i]) {
				cout << i;
				break;
			}
		}
		for (i = i + 1; i <= n; i++) {
			if (!lights[i]) {
				cout << ' ' << i;
			}
		}
		cout << '\n';
	}
}
