#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> numbers;
	vector<vector<int>> people(n, vector<int>());

	int t;
	for (int i = 0; i < n; i++) {
		cin >> t;
		numbers.push_back(t);
	}
	for (int i = 0; i < n; i++) {
		people[i].resize(numbers[i]);
		for (int j = 0; j < numbers[i]; j++) {
			cin >> people[i][j];
		}
		reverse(people[i].begin(), people[i].end());
	}
	numbers.clear();
	numbers.shrink_to_fit();
	
	int k;
	cin >> k;
	int index, num;


	for (int i = 0; i < k; i++) {
		cin  >> num >> index;
		people[index - 1].push_back(num);
	}
	
	for (int i = 0; i < n; i++) {

		reverse(people[i].begin(), people[i].end());
		for (int j = 0; j < people[i].size(); j++) {
			if (j > 0) {
				cout << ' ';
			}
			cout << people[i][j];
		}
		cout << '\n';
	}
}
