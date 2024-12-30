#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x, y;
    int tong = x;
    cout << "Nhap x luy thua y: ";
    cin >> x >> y;
    if (y == 1)
        return x;
    while (y != 1)
    {
        tong *= x;
        y--;
    }
    cout << "Ket qua la: " << tong;
}
