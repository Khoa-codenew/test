#include <iostream>
using namespace std;
int main()
{

    // Cau 3:
    int h;
    int n = h - 1;
    cout << "Nhap chieu cao h: ";
    cin >> h;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;

    // Cau 4:

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            if (k == 0 || k == 2 * i || i == h - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}