/*Nhập vào thời điểm 1 và thời điểm 2. Tìm thời gian trải qua giữa hai thời
điểm này tính bằng giờ, phút, giây.*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int h1, m1, s1;
    int h2, m2, s2;
    cout << "Nhap gio phut giay [1]: ";
    cin >> h1 >> m1 >> s1;
    cout << "Nhap gio phut giay [2]";
    cin >> h2 >> m2 >> s2;
    int time1 = h1 * 3600 + m1 * 60 + s1;
    int time2 = h2 * 3600 + m2 * 60 + s2;
    int time = fabs(time1 - time2);
    int hour = time / 3600;
    time %= 3600;
    int minute = time / 60;
    time %= 60;
    cout << "hieu thoi gian: " << hour << " gio " << minute << " phut " << time << " giay";
    return 0;
}
