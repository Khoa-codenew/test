#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int max = 10;
    for (int i = 1; i < max; i++)
    {
        for (int j = i; j < max; j++)
        {
            cout << j << " * " << i << " = " << i * j << endl;
        }
    }
}