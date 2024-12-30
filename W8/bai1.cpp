#include <iostream>
#include <cmath>
using namespace std;
struct rectangle
{
    int dai;
    int rong;
    int chuvi;
    int area;
};
struct circle
{
    int r;
    int area;
};
struct triangle
{
    int c1, c2, c3;
    float p;
    float area;
};
int main()
{
    rectangle hcn;
    circle tron;
    triangle tamgiac;
    // tinh chu vi dien tich hinh chu nhat
    cout << "Nhap chieu dai, chieu rong hinh chu nhat: ";
    cin >> hcn.dai >> hcn.rong;
    hcn.chuvi = (hcn.dai + hcn.rong) * 2;
    hcn.area = hcn.dai * hcn.rong;
    cout << "Chu vi hinh chu nhat la: " << hcn.chuvi << endl;
    cout << "Dien tich hinh chu nhat la: " << hcn.area << endl;
    // tinh dien tich hinh tron
    cout << "Nhap ban kinh R: ";
    cin >> tron.r;
    tron.area = 2 * 3.14 * tron.r * tron.r;
    cout << "Dien tich hinh tron la: " << tron.area << endl;
    // tinh dien tich hinh tam giac;
    cout << "Nhap 3 canh cua tam giac: ";
    cin >> tamgiac.c1 >> tamgiac.c2 >> tamgiac.c3;
    tamgiac.p = (tamgiac.c1 + tamgiac.c2 + tamgiac.c3) / 2.0;
    if (tamgiac.p == tamgiac.c1 || tamgiac.p == tamgiac.c2 || tamgiac.p == tamgiac.c3)
        tamgiac.area = 0;
    else
        tamgiac.area = sqrt(tamgiac.p * (tamgiac.p - tamgiac.c1) * (tamgiac.p - tamgiac.c2) * (tamgiac.p - tamgiac.c3));
    cout << "Dien tich hinh tam giac la: " << tamgiac.area;
    return 0;
}