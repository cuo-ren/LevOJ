#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	long long n, t;
	while (cin >> n >> t) {

		vector<long long> hp(n, 0);
		for (long long i = 0; i < n; i++) {
			cin >> hp[i];
		}
		sort(hp.begin(), hp.end());
		long long count = 0;
		for (long long i = 0; i < n; i++) {
			if (t >= hp[i]) {
				t -= hp[i];
				count++;
			}
			else {
				break;
			}
		}
		cout << count << '\n';
	}
}
