#include <iostream>
#include <cmath>
using namespace std;
double tinhcanN(int n, double x)
{
    if (x < 0)
    {
        return -1;
    }
    else
        return pow(x, 1.0 / n);
}
int main()
{
    int n;
    double x;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Can bac n cua x la: " << tinhcanN(n, x);
    return 0;
}