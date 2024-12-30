/*Viết chương trình nhập vào tọa độ (xC, yC) là tâm của một đường tròn, và R
là bán kính của đường tròn đó. Nhập vào tọa độ (xM, yM) của điểm M. Xác định điểm
M nằm trong, nằm trên hay nằm ngoài đường tròn*/
#include <iostream>
#include <cmath>
using namespace std;
struct Point
{
    double x;
    double y;
};
double Distance(Point p1, Point p2)
{
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}
int main()
{
    Point c, m;
    double R;
    cout << "Nhap toa diem C la tam duong tron(xc,yc): ";
    cin >> c.x >> c.y;
    do
    {
        cout << "Nhap ban kinh R: ";
        cin >> R;
    } while (R <= 0);
    cout << "Nhap diem M: ";
    cin >> m.x >> m.y;
    double d = Distance(c, m);
    if (d < R)
    {
        cout << "M nam trong duong tron.";
    }
    else if (d > R)
    {
        cout << "M nam ngoai duong tron.";
    }
    else
        cout << "M nam tren duong tron.";
    return 0;
}