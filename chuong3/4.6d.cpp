#include <iostream>
using namespace std;

// Hàm tính tổng các chữ số
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }
    return sum;
}

int main() {
    int n;
    cout << "Nhập số nguyên dương n: ";
    cin >> n;

    int result = sumOfDigits(n);

    cout << "Tổng các chữ số của " << n << " là: " << result << endl;

    return 0;
}
