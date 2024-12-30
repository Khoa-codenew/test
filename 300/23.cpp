/*Viết chương trình tìm các số hoàn hảo (perfect number) nhỏ hơn một số
nguyên dương n cho trước. Biết số hoàn hảo là số nguyên dương, bằng tổng các ước
số thực sự của nó (ví dụ: 28 = 14 + 7 + 4 + 2 + 1).  */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "n khong hop le.";
        return 1;
    }
    cout << "Cac so hoan hao nho hoac bang " << n << " la: ";
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
                sum += j;
        }
        if (i == sum)
            cout << i << ' ';
    }
    return 0;
}