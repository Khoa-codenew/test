#include <iostream>
using namespace std;
int main()
{
    int thang;
    do
    {
        cout << "Nhap thang: ";
        cin >> thang;
    } while (thang < 1 || thang > 12);
    switch (thang)
    {
    case 1:
    case 2:
    case 3:
        cout << "Thang " << thang << " thuoc quy 1";
        break;
    case 4:
    case 5:
    case 6:
        cout << "Thang " << thang << " thuoc quy 2";
        break;
    case 7:
    case 8:
    case 9:
        cout << "Thang " << thang << " thuoc quy 3";
        break;
    case 10:
    case 11:
    case 12:
        cout << "Thang " << thang << " thuoc quy 4";
        break;
    }
    return 0;
}