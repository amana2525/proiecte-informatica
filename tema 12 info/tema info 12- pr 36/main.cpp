#include <iostream>

using namespace std;

int main() {
    int a, b, x, d1, d2, desc, i;

    cin >> a >> b;

    for (i = a; i <= b; i++) {
        x = i;
        desc = 1;
        d1 = x % 10;
        x /= 10;
        while (x > 0) {
            d2 = x % 10;
            if (d1 > d2) {
                desc = 0;
                break;
            }
            d1 = d2;
            x /= 10;
        }
        if (desc == 1) {
            cout << i << " ";
        }
    }

    return 0;
}
