#include <iostream>
using namespace std;
bool namnhuan(int nam)
{
    if (!((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0))
        return false;
    return true;
}
int main()
{
    int thang;
    int nam;
    cout << "Nhap nam: ";
    cin >> nam;
    do
    {
        cout << "Nhap thang: ";
        cin >> thang;
    } while (thang < 1 || thang > 12);
    switch (thang)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "Thang " << thang << " co 31 ngay" << endl;
        break;
    case 2:
        if (namnhuan(nam))
        {
            cout << "Thang 2 co 29 ngay";
        }
        else
            cout << "Thang 2 co 28 ngay";
        break;
    default:
        cout << "Thang " << thang << " co 30 ngay";
    }
    return 0;
}