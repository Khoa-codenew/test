#include <iostream>
using namespace std;
int tong(int n)
{   int sum =0;
    if(n==0 || n== 1) return 1;
    else
    {
        for(int i=0;i<n;i++)
        {
            sum+=(n-1)*tong(n-1);
        }
    }
}
int main()
{
    int n;
    cout<<"Nhap N: ";
    cin>>n;
    
}