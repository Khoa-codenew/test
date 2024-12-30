#include <iostream>
using namespace std;

// Hàm kiểm tra số nguyên tố
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Nhập số nguyên dương n: ";
    cin >> n;

    cout << "Các số nguyên tố đầu tiên là:\n";
    int count = 0;
    for (int i = 2; count < n; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
            ++count;
        }
    }
    cout << endl;

    return 0;
}
