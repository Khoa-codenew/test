/* Viết chương trình nhập vào ngày, tháng, năm (giả sử nhập đúng, không cần
kiểm tra hợp lệ). Tìm xem ngày đó là ngày thứ bao nhiêu trong năm*/
#include <iostream>
using namespace std;
int main()
{
    int day, month, year;
    cout << "Nhap ngay thang nam: ";
    cin >> day >> month >> year;
    int count = day;
    for (int i = 1; i < month; i++)
    {
        switch (i)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            count += 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            count += 30;
            break;
        case 2:
            if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
            {
                count += 29;
            }
            else
                count += 28;
            break;
        }
    }
    cout << "Ngay " << day << " thang " << month << " nam " << year << " la ngay thu " << count;
    return 0;
}