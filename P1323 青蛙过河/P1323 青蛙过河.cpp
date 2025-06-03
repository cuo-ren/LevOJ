#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> f(24, 0);
    f[0] = 1;
    f[1] = 2;
    for (int i = 2; i <= 23; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
    int n;
    while (cin >> n) {
        cout << f[n - 1] << '\n';
    }
}
