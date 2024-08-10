#include <iostream>

using namespace std;

int main() {
    int n, i, j, x, y, c, f1[10], f2[10], cnt;

    cin >> n;

    for (i = 1; i <= n; i++) {
        for (j = i + 1; j <= n; j++) {
            for (c = 0; c < 10; c++) {
                f1[c] = 0;
                f2[c] = 0;
            }

            x = i;
            while (x) {
                f1[x % 10]++;
                x /= 10;
            }

            y = j;
            while (y) {
                f2[y % 10]++;
                y /= 10;
            }

            cnt = 0;
            for (c = 0; c < 10; c++) {
                if (f1[c] > 0 && f2[c] > 0)
                    cnt++;
            }

            if (cnt >= 2) {
                cout << "(" << i << ", " << j << ") ";
            }
        }
    }

    return 0;
}
