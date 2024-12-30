#include <iostream>
using namespace std;

// Hàm tính x_n theo định nghĩa
int calculateX(int n) {
    if (n == 1 || n == 2) return 1;
    int x1 = 1, x2 = 1, xn;
    for (int i = 3; i <= n; ++i) {
        xn = x2 + (i - 1) * x1;
        x1 = x2;
        x2 = xn;
    }
    return xn;
}

int main() {
    int n = 7;
    int result = calculateX(n);
    cout << "x_" << n << " = " << result << endl;
    return 0;
}
