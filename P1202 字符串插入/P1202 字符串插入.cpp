#include <iostream>
#include <string>
using namespace std;

int main() {
	string s, s1, output;
	cin >> s >> s1;
	int max_num = 0, index = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] > max_num) {
			max_num = s[i];
			index = i;
		}
	}
	output = s.substr(0, index + 1) + s1 + s.substr(index + 1, s.length());
	cout << output;
}
