#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<string> s;
	string t;
	for (int i = 0; i < n; i++) {
		cin >> t;
		s.push_back(t);
	}
	string temp;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if ((s[j] + s[j + 1]).compare(s[j + 1] + s[j]) < 0) {
				t = s[j]; s[j] = s[j + 1]; s[j + 1] = t;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << s[i];
	}
}
