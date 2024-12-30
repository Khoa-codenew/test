#include <iostream>
using namespace std;

int main() {
    int n = 7;
    int x1 = 1, x2 = 1, xn;

    for (int i = 3; i <= n; ++i) {
        xn = x2 + (i - 1) * x1;
        x1 = x2;
        x2 = xn;
    }

    cout << "x_" << n << " = " << xn << endl;

    return 0;
}
