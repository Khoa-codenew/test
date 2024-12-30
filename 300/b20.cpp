/* Viết chương trình nhập số kW điện đã tiêu thụ. Tính tiền điện phải trả, biết
rằng khung giá tiền điện như sau: */
#include <iostream>
using namespace std;
int main()
{
    int amount;
    cout << "Nhap so kW tieu thu: ";
    cin >> amount;
    int money = amount * 500;
    if (amount > 100)
    {
        money += (amount - 100) * 300;
    }
    if (amount > 250)
    {
        money += (amount - 250) * 200;
    }
    if (amount > 350)
        money += (amount - 350) * 500;
    cout << "Chi phi " << money;
    return 0;
}