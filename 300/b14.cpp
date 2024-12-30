// tim ngay truoc do va sau do cua ngay hien tai
#include <iostream>
using namespace std;
void after(int &day, int &month, int &year)
{
    if (month == 12)
    {
        if (day == 31)
        {
            day = 1;
            month = 1;
            year++;
        }
        else
            day++;
    }
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10)
    {
        if (day == 31)
        {
            month++;
            day = 1;
        }
        else
            day++;
    }
    else
    {
        if (month == 2)
        {
            if (year % 4 && (year % 100 != 0 || year % 400))
            {
                if (day == 29)
                {
                    day = 1;
                    month++;
                }
                else
                    day++;
            }
            else
            {
                if (day == 28)
                {
                    day = 1;
                    month++;
                }
                else
                    day++;
            }
        }
        if (day == 30)
        {
            day = 1;
            month++;
        }
        else
            day++;
    }
}
void before(int &day, int &month, int &year)
{
    if (day == 1)
    {
        if (month == 3)
        {
            if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
            {
                day = 29;
                month--;
            }
            else
            {
                day = 28;
                month--;
            }
        }
        if (month == 1)
        {
            day = 31;
            month = 12;
            year--;
        }
        if (month == 5 || month == 7 || month == 10 || month == 12)
        {
            day = 30;
            month--;
        }
        else
        {
            day = 31;
            month--;
        }
    }
    else
        day--;
}
int main()
{
    int day, month, year;
    cout << "nhap ngay thang nam: ";
    cin >> day >> month >> year;
    before(day, month, year);
    cout << "Ngay truoc do: " << day << "/" << month << "/" << year;
    after(day, month, year);
    cout << "Ngay sau do: " << day << '/' << month << '/' << year;
    return 0;
}