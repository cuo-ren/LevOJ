#include <iostream>
using namespace std;
bool ls[100000] = { 0 };
//0表示有树，1表示没有树
int main() {
	int l, m, left, right, count = 0;
	cin >> l >> m;
	while (m--) {
		cin >> left >> right;
		for (int i = left; i <= right; i++) {
			ls[i] = 1;
		}
	}
	for (int i = 0; i <= l; i++) {
		if (ls[i] == 0) {
			count++;
		}
	}
	cout << count;
}
