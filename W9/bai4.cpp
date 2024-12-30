#include <iostream>
using namespace std;
int main()
{
    int h;
    cout << "Nhap do cao tam giac can: ";
    cin >> h;
    for (int i = 1; i <= h - i - 1; i++)
    {
        for (int j = 1; j <= j + 2 * i ; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}