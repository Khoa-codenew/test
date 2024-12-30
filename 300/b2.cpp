/*Nhập vào tọa độ 2 điểm A(xA, yA) và B(xB, yB). Tính khoảng cách AB.*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double xa, ya, xb, yb;
    cout << "Nhap toa do diem A: ";
    cin >> xa >> ya;
    cout << "Nhap toa do diem B: ";
    cin >> xb >> yb;
    double Dis = sqrt(pow(xb - xa, 2) + pow(yb - ya, 2));
    cout << "Khoang cach AB la: " << Dis;
}