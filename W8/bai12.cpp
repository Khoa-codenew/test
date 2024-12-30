#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int max = INT_MIN;
    while (n != 0)
    {
        int i = n % 10;
        if (i > max)
            max = i;
        n /= 10;
    }
    cout << "Chu so lon nhat cua n la: " << max;
}