#include <iostream>
using namespace std;
int chuso(int n)
{
    int m =n%10;
    while (n!=0)
    {
        int chuso = n%10;
        if(chuso < m ) m = chuso;
        n/=10;
    }
    return m;
}
int main()
{
    int n;
    int count = 0;
    cin>>n;
    while(n!=0)
    {   
        int i= n%10;
        if(i == chuso(n)) count ++;
        n/=10;
    }
    cout<<"So luong chu cai nho nhat la: "<<count;
}