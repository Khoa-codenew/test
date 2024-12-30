#include <iostream>
using namespace std;

// Hàm tính GCD bằng thuật toán Euclid
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cout << "Nhập số nguyên dương a: ";
    cin >> a;
    cout << "Nhập số nguyên dương b: ";
    cin >> b;

    int result = gcd(a, b);

    cout << "Ước số chung lớn nhất của " << a << " và " << b << " là: " << result << endl;

    return 0;
}
