#include <iostream>
using namespace std;
int main()
{
    int h;

    cout << "Nhap chieu cao h: ";
    cin >> h;

    // Cau 1:

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < h - i; j++)
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

    // Cau 2:

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < h - i; j++)
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

    cout << endl;
    cout << endl;

    return 0;
}