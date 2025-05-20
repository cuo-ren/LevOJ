#include <iostream>
#include <string>
using namespace std;

int main() {
	string binary;
	cin >> binary;
	
	string hex = "";
	while (binary.size() % 4 != 0) {
		binary = '0' + binary;
	}
	int len = binary.size();
	while (len) {
		int result = 0;
		int w = 1;
		for (int i = len-1; i >= len - 4; i--) {
			result += (int)(binary[i] - '0') * w;
			w *= 2;
		}
		if (result >= 10) {
			hex = (char)(result - 10 + 'A') + hex;
		}
		else {
			hex = (char)(result + '0') + hex;
		}
		len -= 4;
	}

	cout << hex;
}
