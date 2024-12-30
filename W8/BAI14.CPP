#include <iostream>
#include <climits> // Để sử dụng INT_MIN
using namespace std;

int solonnhat(int n)
{
    int max = INT_MIN;
    while (n != 0)
    {
        int i = n % 10;
        if (i > max)
            max = i;
        n /= 10;
    }
    return max;
}

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int max_digit = solonnhat(n); // Lưu giá trị chữ số lớn nhất một lần
    int count = 0;

    int temp = n; // Sử dụng biến tạm để duyệt qua các chữ số
    while (temp != 0)
    {
        int i = temp % 10;
        if (i == max_digit)
            count++;
        temp /= 10;
    }

    cout << "So luong chu so lon nhat la: " << count << endl;
    return 0;
}
