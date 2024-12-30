#include <iostream>
#include <cmath>
using namespace std;
double tinhcann(double x, int n)
{
    if (x < 0 && n % 2 == 0)
        return -1;
    else
        return pow(x, 1.0 / n);
}
int main()
{
    int x, n;
    cout << "Nhap so can x bac n: ";
    cin >> x >> n;
    cout << "Ket qua: " << tinhcann(n, x);
}