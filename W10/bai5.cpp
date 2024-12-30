#include <iostream>
using namespace std;
int main()
{
    int m, n;
    do
    {
        cout << "Nhap m: ";
        cin >> m;
        cout << "Nhap n: ";
        cin >> n;
    } while (m < 1 || n < 1);

    // Cau a:

    cout << "Hinh chu nhat dac\n";

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << '\n';
    cout << '\n';

    // Cau b:

    cout << "Hinh chu nhat rong\n";

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == 1 || i == n || j == 1 || j == m)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}