/* Viết chương trình giải phương trình bậc 1: ax + b = 0 (a, b nhập từ bàn phím).
Xét tất cả các trường hợp có thể. */
#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cout << "Nhap a,b: ";
    cin >> a >> b;
    if (a == 0)
    {
        if (b == 0)
        {
            cout << "Phuong trinh vo so nghiem";
        }
        else
        {
            cout << "Phuong trinh vo nghiem";
        }
    }
    else
        cout << "Phuong trinh co nghiem la: " << -b / a;
    return 0;
}