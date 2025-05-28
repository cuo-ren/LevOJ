#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	int a = 0, b = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'W') {
			a++;
		}
		else if (s[i] == 'L') {
			b++;
		}
		else if (s[i] == 'E') {
			break;
		}
		if ((a >= 11 or b >= 11) and (a - b >= 2 or b - a >= 2)) {
			cout << a << ':' << b << '\n';
			a = 0;
			b = 0;
		}
	}
	//if (a and b) {
		cout << a << ':' << b << '\n' << '\n';
//	}

	a = 0;
	b = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'W') {
			a++;
		}
		else if (s[i] == 'L') {
			b++;
		}
		else if (s[i] == 'E') {
			break;
		}
		if ((a >= 21 or b >= 21) and (a - b >= 2 or b - a >= 2)) {
			cout << a << ':' << b << '\n';
			a = 0;
			b = 0;
		}
	}
	//if (a and b) {
		cout << a << ':' << b << '\n';
	//}
}
