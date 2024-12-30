// viet uoc so chung lon nhat va boi so chung nho nhat
#include <iostream>
using namespace std;
int main()
{
    int a, b, gcd, lcm;
    cout << "Nhap 2 so nguyen a b: ";
    cin >> a >> b;
    gcd = a;
    while (a % gcd || b % gcd)
    {
        gcd--;
    }
    cout << "USCLN la: " << gcd << endl;
    lcm = a;
    while (lcm % a || lcm % b)
    {
        lcm++;
    }
    cout << "BSCNN la: " << lcm;
    return 0;
}