#include <iostream>
using namespace std;

int main() {
	int l, n;
	cin >> l >> n;
	int max_num = 0, min_num = 0, t;
	while (n--) {
		cin >> t;
		max_num = max(max_num, max(t, l - t));
		min_num = max(min_num, min(t, l - t));
	}
	cout << min_num << " " << max_num;
}
