#include <iostream>
using namespace std;
bool hople(unsigned day, unsigned month, unsigned year)
{
    if (day < 1 || day > 31 || month < 1 || month > 12 || year < 1)
        return false;
    if (day == 31 && (month == 4 || month == 6 || month == 9 || month == 11))
        return false;
    if (month == 2)
    {
        if (day > 29)
            return false;
        if (day == 29)
            return year % 4 == 0 && year % 100 || year % 400 == 0;
    }
    return true;
}
int main()
{
    unsigned day, month, year;
    while (1)
    {
        cout << "Nhap ngay thang nam: ";
        cin >> day >> month >> year;
        if (!day && !month && !year)
            break;
        if (hople(day, month, year))
        {
            cout << "Ngay thang nam hop le\n";
            double a = (14 - month) / 12;
            int y = year - a;
            int m = month + 12 * a - 2;
            int d = (day + y + y / 4 - y / 100 + y / 400 + 31 * m / 12) % 7;
            switch (d)
            {
            case 1:
                cout << "Thu hai\n";
                break;
            case 2:
                cout << "Thu ba\n";
                break;
            case 3:
                cout << "Thu tu\n";
                break;
            case 4:
                cout << "Thu nam\n";
                break;
            case 5:
                cout << "Thu sau\n";
                break;
            case 6:
                cout << "Thu bay\n";
                break;
            default:
                cout << "Chu nhat\n";
                break;
            }
        }

        else
            cout << "Ngay thang nam khong hop le\n";
    }
    return 0;
}