#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    int min = INT_MAX;
    while (n != 0)
    {
        int i = n % 10;
        if (i < min)
            min = i;
        n /= 10;
    }
    cout << "Chu so nho nhat la: " << min;
}