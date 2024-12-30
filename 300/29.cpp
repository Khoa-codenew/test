/*lam bang do C sang do F va nguoc lai*/
#include <iostream>
using namespace std;
int main()
{
    double celsius, fahrenheit;
    cout << "celsius   fahrenheit" << endl;
    for (int i = 0; i < 10; i++)
    {
        celsius = i;
        fahrenheit = celsius * 9 / 5 + 32;
        cout << celsius << "        " << fahrenheit << endl;
    }
    cout << "fahrenheit   celsius" << endl;
    for (int i = 32; i < 42; i++)
    {
        fahrenheit = i;
        celsius = (fahrenheit - 32) * 5 / 9;
        cout << fahrenheit << "        " << celsius << endl;
    }
    return 0;
}