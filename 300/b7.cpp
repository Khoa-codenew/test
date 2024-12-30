/*Viết chương trình giải phương trình bậc 2: ax2 + bx + c = 0 (a, b, c nhập từ
bàn phím). Xét tất cả các trường hợp có thể.*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, b, c;
    cout << "Nhap a,b,c: ";
    cin >> a >> b >> c;
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                cout << "Phuong trinh vo so nghiem";
            }
            else
            {
                cout << "Phuong trinh vo nghiem";
            }
        }
        else
        {
            cout << "Phuong trinh co nghiem duy nhat" << -c / b;
        }
    }
    else
    {
        float del = b * b - 4 * a * c;
        if (del < 0)
            cout << "Phuong trinh vo nghiem";
        else if (del == 0)
            cout << "Phuong trinh co nghiem kep x1 = x2 = " << -b / (2 * a);
        else
        {
            cout << "Phuong trinh co 2 nghiem phan biet: " << endl;
            cout << "x1 = " << (-b + sqrt(del)) / (2 * a) << endl;
            cout << "x2 = " << (-b - sqrt(del)) / (2 * a);
        }
    }
    return 0;
}