#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int n;
    int tong = 0;
    cout<<"Nhap so nguyen duong n: ";
    cin>>n;
    while (n !=0)
    {
        tong += n%10;
        n /= 10;
    }
    cout<<"Tong cac chu so cua so nguyen duong n la: "<<tong;
}