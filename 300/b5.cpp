/*Viết chương trình nhập vào tọa độ các đỉnh của tam giác ABC và của điểm M.
xác định điểm M nằm trong, nằm trên cạnh hay nằm ngoài tam giác ABC. */
#include <iostream>
#include <cmath>
using namespace std;
struct Point
{
    double x;
    double y;
};
double area(Point a, Point b, Point c)
{
    return 0.5 * fabs(a.x * (b.y - c.y) - a.y * (b.x - c.x) + (b.x * c.y - c.x * b.y));
}
int main()
{
    Point a, b, c, m;
    cout << "Nhap diem A(xa,ya)";
    cin >> a.x >> a.y;
    cout << "Nhap diem B(xb,yb)";
    cin >> b.x >> b.y;
    cout << "Nhap diem C(xc,yc)";
    cin >> c.x >> c.y;
    cout << "Nhap diem M(xm,ym)";
    cin >> m.x >> m.y;
    double sum = area(m, a, b) + area(m, b, c) + area(m, c, a);
    double tria = area(a, b, c);
    if (sum > tria)
        cout << "M nam ngoai tam giac ABC. ";
    else if (sum < tria)
        cout << "M nam trong tam giac ABC";
    else
        cout << "M nam tren tam giac ABC. ";
    return 0;
}