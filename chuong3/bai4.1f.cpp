#include <iostream>
#include <cmath>

using namespace std;
bool isArmstrong(int num) {
    int original = num;
    int sum = 0;
    int numDigits = log10(num) + 1;
    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, numDigits);
        num /= 10;
    }
    return original == sum;
}
int main(){
    int n;
    cin>>n;
    cout << "Các số Armstrong nhỏ hơn hoặc bằng " << n << " là:\n";
    for (int i = 1; i <= n; ++i) {
        if (isArmstrong(i)) cout << i << " ";
    }
    cout << endl;
}