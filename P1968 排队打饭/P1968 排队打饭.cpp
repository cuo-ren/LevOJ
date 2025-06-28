#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, op, i = 0, x;
	cin >> n;
	vector<int> l;
	while (n--) {
		cin >> op;
		if (op == 1) {
			i++;
		}
		else if (op == 2) {
			cin >> x;
			l.insert(l.begin() + i, x);
		}
		else if (op == 3) {
			l.erase(l.begin() + i);
		}
	}
	for (int i = 0; i < l.size(); i++) {
		if (i > 0) {
			cout << ' ';
		}
		cout << l[i];
	}
}
