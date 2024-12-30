#include <iostream>
using namespace std;
int main()
{
    int n;
    int tich = 1;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    while (n != 0)
    {
        int i = n % 10;
        if (i % 2 != 0)
            tich *= i;
        n /= 10;
    }
    cout << "Tich cac chu so le cua so nguyen duong n la: " << tich;
}