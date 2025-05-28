#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;


int main() {
	int n;
	cin >> n;
	vector<string> names(n, "");
	for (int i = 0; i < n; i++) {
		cin >> names[i];
	}
	int w, s;
	scanf("%d,%d", &w, &s);

	vector<int> index(n, 0);
	for (int i = 0; i < n; i++) {
		index[i] = i;
	}
	w -= 1;
	int number = n;
	for (int j = 0; j < number; j++) {
		w = (w + s - 1) % n;
		cout << names[index[w]] << '\n';
		for (int i = w; i < n - 1; i++) {
			index[i] = index[i + 1];
		}
		n--;
	}
}
