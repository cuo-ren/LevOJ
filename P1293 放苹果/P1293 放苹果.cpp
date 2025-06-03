#include <iostream>
using namespace std;
int f(int x, int y)
{
    if (x == 0 || y == 1)
        return 1;
    if (x < y)
        return f(x, x);
    else
        return f(x, y - 1) + f(x - y, y);
}
int main()
{
    int m, n;
    while (cin >> m >> n)
        cout << f(m, n) << endl;
}
