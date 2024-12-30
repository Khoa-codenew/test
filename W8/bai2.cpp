#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    do
    {
        cout<<"Nhap n: ";
        cin>>n;
    }
    while(n<3);
    int count = 0, currentcount = 0;
    int tong = 0;
    for( int i = 1; i<sqrt(n);i++)
    {
        for(int j = 1 ; j<sqrt(n); j++)
        {
            if(tong <  n) cout<<i<<" ";
            tong +=i;
        }
    }
    
    return 0;
}