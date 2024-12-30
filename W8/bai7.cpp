#include <iostream>
#include <cstring>
using namespace std;
int tinhsole(int n)
{
    int count = 0;
    while (n != 0)
    {
        int i = n % 10;
        if (i % 2 != 0)
            count++;
        n /= 10;
    }
    return count;
}
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "so cac so le la: " << tinhsole(n);
}