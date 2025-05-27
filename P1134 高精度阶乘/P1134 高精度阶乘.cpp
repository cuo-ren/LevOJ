#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	string s = "1";
	char t;
	for (int i = 1; i <= n; i++) {
		int temp = 0;
		for (int j = 0; j < s.length(); j++) {
			t = s[j];
			s[j] = (((s[j] - '0') * i) % 10 + temp) % 10 + '0';
			temp = ((t - '0') * i) / 10 + (((t - '0') * i) % 10 + temp) / 10;
		}
		if (temp) {
			while (temp) {
				s += temp % 10 + '0';
				temp /= 10;
			}
		}
	}
	reverse(s.begin(), s.end());
	cout << s;
}
