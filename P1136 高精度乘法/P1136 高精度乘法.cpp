#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string Addition(string a, string b) {
	reverse(b.begin(), b.end());
	string c = "";
	int temp = 0, i = 0;
	for (; i < (a.length()>b.length() ? b.length() : a.length()); i++) {
		c += (a[i] - '0' + b[i] - '0' + temp) % 10 + '0';
		temp = (a[i] - '0' + b[i] - '0' + temp) / 10;
	}
	for (; i < (a.length() < b.length() ? b.length() : a.length()); i++) {
		c += ((a.length() < b.length() ? b[i] : a[i]) - '0' + temp) % 10 + '0';
		temp = ((a.length() < b.length() ? b[i] : a[i]) - '0' + temp) / 10;
	}
	if (temp) {
		c += temp + '0';
	}
	reverse(c.begin(), c.end());
	return c;
}


int  main() {
	string a, b;
	cin >> a >> b;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	string c, ans = "0";
	char t;
	for (int i = 0; i < b.length(); i++) {
		int temp = 0;
		c = a;
		for (int j = 0; j < i; j++) {
			c = "0" + c;
		}
		for (int j = 0; j < c.length(); j++) {
			t = c[j];
			c[j] = (((c[j] - '0') * (b[i] - '0')) % 10 + temp) % 10 + '0';
			temp = ((t - '0') * (b[i] - '0')) / 10 + (((t - '0') * (b[i] - '0')) % 10 + temp) / 10;
		}
		if (temp) {
			while (temp) {
				c += temp % 10 + '0';
				temp /= 10;
			}
		}
		ans = Addition(c, ans);
	}
	cout << ans;
}
