/*Nhập vào một số tự nhiên n (n khai báo kiểu unsigned long)
a. Số tự nhiên n có bao nhiêu chữ số.
b. Hãy tìm chữ số cuối cùng của n.
c. Hãy tìm chữ số đầu tiên của n.
d. Tính tổng các chữ số của n.
e. Hãy tìm số đảo ngược của n.*/
#include <iostream>
using namespace std;

int main()
{
    int u, t, n, sum = 0, count = 0, reversed = 0;
    cout << "Nhap n: ";
    cin >> n;
    t = n;
    u = t % 10;

    // Đếm số chữ số và tính tổng các chữ số
    while (t > 0)
    {
        count++;
        sum += t % 10;
        t /= 10;
    }

    // In kết quả
    cout << n << " co " << count << " chu so" << endl;
    cout << "so cuoi cung la: " << n % 10 << endl;

    // Tìm chữ số đầu tiên
    t = n;
    while (t >= 10)
    {
        t /= 10;
    }
    cout << "so dau tien la: " << t << endl;

    cout << "tong: " << sum << endl;

    // Đảo ngược số
    t = n;
    while (t > 0)
    {
        reversed = reversed * 10 + t % 10;
        t /= 10;
    }
    cout << "so dao nguoc: " << reversed << endl;

    return 0;
}
