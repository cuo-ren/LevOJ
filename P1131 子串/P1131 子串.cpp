#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	vector<string> s(t, "");
	for (int i = 0; i < t; i++) {
		cin >> s[i];
	}
	string x, x2;
	int max_num = 0;
	for (int i = 1; i <= s[0].length(); i++) {
		for (int j = 0; j < s[0].length() - i + 1; j++) {
			bool flag = true;
			x = s[0].substr(j, i);
			x2 = x;
			reverse(x2.begin(), x2.end());
			for (int k = 1; k < s.size(); k++) {
				if (s[k].find(x) == string::npos and s[k].find(x2) == string::npos) {
					flag = false;
					break;
				}
			}
			if (flag) {
				max_num = x.length();
				break;
			}
		}
	}
	cout << max_num;
}
