#include <iostream>
#include <cmath> // Để sử dụng hàm pow

using namespace std;

int main() {
    double x;
    int n;

    cout << "Nhập số thực x: ";
    cin >> x;
    cout << "Nhập số nguyên dương n: ";
    cin >> n;

    double result = pow(x, n);

    cout << x << " ^ " << n << " = " << result << endl;

    return 0;
}
