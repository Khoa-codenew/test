/*Viết chương trình nhập vào ba số nguyên. Hãy in ba số này ra màn hình theo
thứ tự tăng dần và chỉ dùng tối đa một biến phụ. */
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Nhap a,b,c: ";
    cin >> a >> b >> c;
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    if (b > c)
    {
        int temp = c;
        c = b;
        b = temp;
    }
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    cout << a << b << c;
    return 0;
}