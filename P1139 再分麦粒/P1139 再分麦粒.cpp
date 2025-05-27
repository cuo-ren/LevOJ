#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string Addition(string a, string b) {
	string c = "";
	int temp = 0, i = 0;
	for (; i < (a.length() > b.length() ? b.length() : a.length()); i++) {
		c += (a[i] - '0' + b[i] - '0' + temp) % 10 + '0';
		temp = (a[i] - '0' + b[i] - '0' + temp) / 10;
	}
	for (; i < (a.length() < b.length() ? b.length() : a.length()); i++) {
		c += ((a.length() < b.length() ? b[i] : a[i]) - '0' + temp) % 10 + '0';
		temp = ((a.length() < b.length() ? b[i] : a[i]) - '0' + temp) / 10;
	}
	//if (temp) {
	//	c += temp + '0';
	//}
	return c;
}

string multiply(string a, int b) {
	string c(1000, '0');
	int temp = 0;
	char t;
	c.replace(0, min(500, (int)a.length()), a);
	for (int j = 0; j < a.length(); j++) {
		t = c[j];
		c[j] = (((c[j] - '0') * b) % 10 + temp) % 10 + '0';
		temp = ((t - '0') * b) / 10 + (((t - '0') * b) % 10 + temp) / 10;
	}
	if (temp) {
		while (temp) {
			c += temp % 10 + '0';
			temp /= 10;
		}
	}
	return c.substr(0, 500);
}

int main() {
	int n;
	cin >> n;
	string ans(500, '0');
	ans[0] = '1';
	string sum(500, '0');
	sum[0] = '1';
	for (int i = 0; i < n - 1; i++) {
		ans = multiply(ans, 2);
		sum = Addition(sum, ans);
	}
	reverse(sum.begin(), sum.end());
	cout << sum;
}
