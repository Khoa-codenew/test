#include <iostream>
using namespace std;

// Hàm phân tích số n thành tích các số nguyên tố
void primeFactorization(int n) {
    cout << "Phân tích " << n << " thành tích các số nguyên tố: ";
    for (int i = 2; i <= n; ++i) {
        while (n % i == 0) {
            cout << i;
            n /= i;
            if (n > 1) cout << " * ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Nhập số nguyên dương n: ";
    cin >> n;

    primeFactorization(n);

    return 0;
}
