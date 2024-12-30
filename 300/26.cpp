/*Nhập vào tử số, mẫu số (đều khác 0) của một phân số. Hãy rút gọn phân số
này. Chọn dạng xuất thích hợp trong trường hợp mẫu số bằng 1 và phân số có dấu. */
#include <iostream>
using namespace std;
int main()
{
    int a, b, gcd;
    cout << "Nhap tu so mau so: ";
    cin >> a >> b;
    gcd = a;
    while (a % gcd || b % gcd)
    {
        gcd--;
    }
    a /= gcd;
    b /= gcd;
    if (b == -1)
        cout << "Rut gon: " << -a;
    else
        cout << "Rut gon:" << a << '/' << b;
    return 0;
}