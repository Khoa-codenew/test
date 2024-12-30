#include <iostream>
using namespace std;

// Hàm tính x_n theo đệ quy
int calculateX(int n) {
    if (n == 1 || n == 2) return 1;
    return calculateX(n - 1) + (n - 1) * calculateX(n - 2);
}

int main() {
    int n = 7;
    int result = calculateX(n);
    cout << "x_" << n << " = " << result << endl;
    return 0;
}
