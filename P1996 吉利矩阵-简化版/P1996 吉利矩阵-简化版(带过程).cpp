#include <iostream>
using namespace std;

int main() {
    int count = 0;
    for (int a = 0; a <= 5; a++) {
        for (int b = 0; b <= 5 - a; b++) {
            int c = 5 - a - b;
            for (int d = 0; d <= 5; d++) {
                for (int e = 0; e <= 5 - d; e++) {
                    int f = 5 - d - e;

                    int g = 5 - a - d;
                    int h = 5 - b - e;
                    int i = 5 - c - f;

                    // 判断所有值是否非负，且 g+h+i == 5
                    if (g >= 0 && h >= 0 && i >= 0 && g + h + i == 5) {
                        count++;
                    }
                }
            }
        }
    }
    cout << count;
    return 0;
}
