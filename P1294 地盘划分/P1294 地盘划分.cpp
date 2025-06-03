#include <iostream>
using namespace std;

int main() {

	long long a, b;
	cin >> a >> b;
	long long count = 0;
	while (a and b) {
		if (a >= b) {
			count += a / b;
			a %= b;
		}
		else {
			count += b / a;
			b %= a;
		}
	}
	cout << count;
}
