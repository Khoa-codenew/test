/*Viết chương trình nhập vào số giờ, xuất ra số tương đương tính theo tuần,
theo ngày và theo giờ. */
#include <iostream>
using namespace std;
int main()
{
    int time;
    int week, day;
    cout << "Nhap so gio: ";
    cin >> time;
    week = time / 168; // 1tuan co 168 gio
    time %= 168;
    day = time / 24;
    time %= 24;
    cout << week << " tuan " << day << " ngay " << time << " gio";
    return 0;
}