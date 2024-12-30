/* Viết chương trình nhập vào ba số thực là ba cạnh của một tam giác. Kiểm tra
ba cạnh được nhập có hợp lệ hay không. Nếu hợp lệ, hãy cho biết loại tam giác và
tính diện tích tam giác đó.*/
#include <iostream>
#include <cmath>
using namespace std;
bool isqualify(double a, double b, double c)
{
    return (a > 0 && b > 0 && c > 0 && (a + b > c || a + c > b || b + c > a));
}

double area(double a, double b, double c)
{
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
int main()
{
    unsigned a, b, c;
    cout << "Nhap 3 canh tam giac: ";
    cin >> a >> b >> c;
    if (isqualify(a, b, c))
    {
        int p = 0;
        if (a == b || b == c || c == a)
            p += 1;
        if (a == b && b == c)
            p += 1;
        if (a * a + b * b - c * c == 0 || a * a + c * c - b * b == 0 || b * b + c * c - a * a == 0)
            p += 3;
        switch (p)
        {
        case 1:
            cout << "La tam giac can. ";
            break;
        case 2:
            cout << "La tam giac deu. ";
            break;
        case 3:
            cout << "La tam giac vuong. ";
            break;
        case 4:
            cout << "La tam giac vuong can. ";
            break;
        }
        cout << "Dien tich tam giac: " << area(a, b, c);
    }
    return 0;
}