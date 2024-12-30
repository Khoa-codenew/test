/*a. Nhập vào thông tin một ngày với các số nguyên dương d, m, y. Hãy cho biết ngày đó
là ngày thứ bao nhiêu trong năm (ngày 1 tháng 1 là ngày thứ nhất của năm). Ví dụ:
Ngày 3/2/2021 là ngày thứ 34 trong năm.
b. Nhập vào ngày sinh của công dân giới tính nam với các số nguyên dương d, m, y.
Hãy cho biết ngày bắt đầu đến tuổi nghỉ hưu theo quy định hiện hành.
c. Nhập vào ngày sinh của công dân giới tính nữ với các số nguyên dương d, m, y. Hãy
cho biết ngày bắt đầu đến tuổi nghỉ hưu theo quy định hiện hành.*/
#include <iostream>
using namespace std;
int main()
{
    int d, m, y;
    cout << "Nhap ngay: ";
    cin >> d;
    cout << "Nhap thang: ";
    cin >> m;
    cout << "Nhap nam: ";
    cin >> y;
    int day = 0;
    for (int i = 1; i < m; i++)
    {
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
        {
            day += 31;
        }
        else if (i == 4 || i == 6 || i == 9 || i == 11)
        {
            day += 30;
        }
        else
        {
            if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
            {
                day += 29;
            }
            else
            {
                day += 28;
            }
        }
    }
    day += d;
    cout << "Ngay " << d << "/" << m << "/" << y << " la ngay thu " << day << " trong nam." << endl;
    if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
    {
        if (m == 2 && d == 29)
        {
            cout << "Ngay " << d << "/" << m << "/" << y << " la nam nhuan." << endl;
        }
    }
    else
    {
        if (m == 2 && d == 28)
        {
            cout << "Ngay " << d << "/" << m << "/" << y << " khong phai la nam nhuan." << endl;
        }
    }
    if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
    {
        if (m == 2 && d > 29)
        {
            cout << "Ngay " << d << "/" << m << "/" << y << " khong hop le." << endl;
        }
    }
    else
    {
        if (m == 2 && d > 28)
        {
            cout << "Ngay " << d << "/" << m << "/" << y << " khong hop le." << endl;
        }
    }
    if (m > 12)
    {
        cout << "Ngay " << d << "/" << m << "/" << y << " khong hop le." << endl;
    }
    int d1, m1, y1;
    cout << "Nhap ngay sinh: ";
    cin >> d1;
    cout << "Nhap thang sinh: ";
    cin >> m1;
    cout << "Nhap nam sinh: ";
    cin >> y1;
    int day1 = 0;
    for (int i = 1; i < m1; i++)
    {
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
        {
            day1 += 31;
        }
        else if (i == 4 || i == 6 || i == 9 || i == 11)
        {
            day1 += 30;
        }
        else
        {
            if (y1 % 400 == 0 || (y1 % 4 == 0 && y1 % 100 != 0))
            {
                day1 += 29;
            }
            else
            {
                day1 += 28;
            }
        }
    }
    day1 += d1;
    int age = y - y1;
    if (m < m1 || (m == m1 && d < d1))
    {
        age--;
    }
    if (age < 60)
    {
        cout << "Ngay " << d1 << "/" << m1 << "/" << y1 << " se duoc nghi huu vao ngay " << d1 << "/" << m1 << "/" << y1 + 60 << endl;
    }
    else
    {
        cout << "Da qua tuoi nghi huu." << endl;
    }
    int d2, m2, y2;
    cout << "Nhap ngay sinh: ";
    cin >> d2;
    cout << "Nhap thang sinh: ";
    cin >> m2;
    cout << "Nhap nam sinh: ";
    cin >> y2;
    int day2 = 0;
    for (int i = 1; i < m2; i++)
    {
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
        {
            day2 += 31;
        }
        else if (i == 4 || i == 6 || i == 9 || i == 11)
        {
            day2 += 30;
        }
        else
        {
            if (y2 % 400 == 0 || (y2 % 4 == 0 && y2 % 100 != 0))
            {
                day2 += 29;
            }
            else
            {
                day2 += 28;
            }
        }
    }
    day2 += d2;
    int age1 = y - y2;
    if (m < m2 || (m == m2 && d < d2))
    {
        age1--;
    }
    if (age1 < 55)
    {
        cout << "Ngay " << d2 << "/" << m2 << "/" << y2 << " se duoc nghi huu vao ngay " << d2 << "/" << m2 << "/" << y2 + 55 << endl;
    }
    else
    {
        cout << "Da qua tuoi nghi huu." << endl;
    }
    return 0;
}
