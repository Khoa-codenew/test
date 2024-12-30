/*Nhập vào diện tích S của một mặt cầu. Tính thể tích V của hình cầu này*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double S;
    cout << "Nhap S: ";
    cin >> S;
    double R;
    R = sqrt(S / (4 * M_PI));
    double V = (4 * M_PI * R * R * R) / 3;
    cout << "The tich la: " << V;
    return 0;
}