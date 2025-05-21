#include <iostream>
#include <cmath>
using namespace std;

int judge(int r) {
	int max_nums = 0;
	while (r) {
		max_nums = max(r % 10, max_nums);
		r /= 10;
	}
	return max_nums;
}

int main() {
	int p, q, r, t;
	bool flag = true;
	cin >> t;
	while (t--) {
		cin >> p >> q >> r;
		for (int i = judge(r) + 1; i <= 16; i++) {
			flag = true;
			int r2 = 0, rr = r;
			int index = 0;
			while (rr) {
				r2 += (rr%10)*pow(i, index);
				index++;
				rr /= 10;
			}
			int p2 = 0, pp = p;
			index = 0;
			while (pp) {
				p2 += (pp % 10) * pow(i, index);
				index++;
				pp /= 10;
			}
			int q2 = 0, qq = q;
			index = 0;
			while (qq) {
				q2 += (qq % 10) * pow(i, index);
				index++;
				qq /= 10;
			}
			if (p2 * q2 == r2) {
				cout << i << '\n';
				flag = false;
				break;
			}
		}
		if (flag) {
			cout << 0 << '\n';
		}
	}
}
