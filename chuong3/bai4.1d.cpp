#include <iostream>
#include <cmath>
using namespace std;
bool isPalindrome(int num) {
    int original = num;
    int reversed = 0;
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return original == reversed;
}
int main() {
    int n;
    cout << "Nhập số nguyên dương n: ";
    cin >> n;
    cout << "Các số cân xứng nhỏ hơn hoặc bằng " << n << " là:\n";
    for (int i = 1; i <= n; ++i) {
        if (isPalindrome(i)) cout << i << " ";
    }
    cout << endl;
}