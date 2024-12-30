/* Nhập vào một số nguyên dương n, phân tích n thành các thừa số nguyên tố. */
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    // Handle 2 separately
    while (n % 2 == 0) {
        cout << 2;
        n /= 2;
        if (n > 1) cout << " * ";
    }

    // Check odd numbers up to sqrt(n)
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0 && isPrime(i)) {
            cout << i;
            n /= i;
            if (n > 1) cout << " * ";
        }
    }

    // If n is greater than 2, it must be prime
    if (n > 2) {
        cout << n;
    }

    return 0;
}
