#include <iostream>
#include <cmath>
using namespace  std;
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Nhập số nguyên dương n: ";
    cin >> n;

cout << "Các số nguyên tố có số đảo ngược cũng là số nguyên tố:\n";
    for (int i = 2; i <= n; ++i) {
        if (isPrime(i) && isPrime(stoi(to_string(i).substr(string(to_string(i)).length() - 1)))) {
            cout << i << " ";
        }
    }
    cout << endl;
}