#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cout << "Nhap so thuc a: ";
    cin >> a;
    cout << "Nhap so thuc b: ";
    cin >> b;
    if (a > 0 && b < 0)
        cout << "Hay so thuc trai dau.";
    else if (a < 0 && b > 0)
        cout << "Hai so thuc trai dau.";
    else
        cout << "Hai so thuc cung dau.";
}