#include <iostream>
using namespace std;
int main()
{
    int n;
    int tong = 0;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    while (n != 0)
    {
        int i = n % 10;
        tong = (tong + i) * 10;
        n /= 10;
    }
    cout << "So dao nguoc cua so nguyen duong n la: " << tong / 10;
}