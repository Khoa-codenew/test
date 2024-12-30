/*Viết chương trình nhập vào số x chỉ số đo của một góc, tính bằng phút. Cho
biết nó thuộc góc vuông thứ bao nhiêu của vòng tròn lượng giác.
Tính cos(x), dùng hàm do math.h cung cấp.
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x;
    cout << "Nhap so do x cua goc (phut): ";
    cin >> x;
    x = x / 60;
    double rad = x * M_PI / 180;
    cout << "Goc x thuoc goc vuong thu: " << int(x / 90) + 1 << endl; // 0 -> 90, 90 -> 180, 180 -> 270, 270 -> 360
    cout << "Cos(x) = " << cos(rad) << endl;
    return 0;
}