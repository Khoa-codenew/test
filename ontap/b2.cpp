/*Cho mảng một chiều chứa n số nguyên dương a 0 ,a 1 ,a 2 ,…,a n-1 (với n  30000).
a. Số x được gọi là số nguyên tố đối xứng nếu x là số nguyên tố và x bằng trung bình
cộng của số nguyên tố liền trước và số nguyên tố liền sau của nó. Ví dụ 5 là số
nguyên tố đối xứng vì 5=(3+7)/2.
Hãy đếm xem mảng có bao nhiêu số nguyên tố đối xứng ?
b. Biến đổi mỗi số của mảng a về số nguyên tố nhỏ nhất lớn hơn hoặc bằng nó.*/
#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
int nextPrime(int n)
{
    for (int i = n + 1;; i++)
        if (isPrime(i))
            return i;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int count = 0;
    for (int i = 1; i < n - 1; i++)
        if (isPrime(a[i]) && a[i] == (a[i - 1] + a[i + 1]) / 2)
            count++;
    cout << count << endl;
    for (int i = 0; i < n; i++)
        cout << nextPrime(a[i]) << " ";
    return 0;
}