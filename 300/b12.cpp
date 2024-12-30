/*Các hệ số a1, a2, b1, b2, c1, c2 nhập từ bàn phím. Xét tất cả các trường hợp cụ thể.*/
#include <iostream>
using namespace std;
int main()
{
    double a1, a2, b1, b2, c1, c2;
    cout << "Nhap a1,b1,c1: ";
    cin >> a1 >> b1 >> c1;
    cout << "Nhap a2,b2,c2: ";
    cin >> a2 >> b2 >> c2;
    double d = a1 * b2 - a2 * b1;
    if (d)
    {
        double dx = c1 * b2 - c2 * b1;
        double dy = a1 * c2 - a2 * c1;
        cout << "x=" << dx / d << " y=" << dy / d << endl;
    }
    else if (a1 * c2 == a2 * c1 && b1 * c2 == b2 * c1)
        cout << "Vo so nghiem\n";
    else
        cout << "Vo nghiem\n";
    return 0;
}