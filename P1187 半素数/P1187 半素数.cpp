#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int n) {
	for (int i = 2; i <= (int)sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	int n;
	vector<int> prime;
	for (n = 2; n <= 1000000; n++) {
		if (isPrime(n)) {
			prime.push_back(n);
		}
	}
	while (cin >> n) {
		bool flag = true;
		for (int i : prime) {
			if (i >= n) {
				break;
			}
			if (n % i == 0 and isPrime(n / i)) {
				cout << "Yes\n";
				flag = false;
				break;
			}
		}
		if (flag) {
			cout << "No\n";
		}
	}
}
