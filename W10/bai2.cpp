#include <iostream>
#include <cmath>
using namespace std;
int luythua(int x, int y)
{
    int result = 1;
    for (int i = 0; i < y; i++)
    {
        result *= x;
    }
    return result;
}
int main()
{
    int x, y;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap y(so mu): ";
    cin >> y;
    cout << "x^y = " << luythua(x, y);
    return 0;
}