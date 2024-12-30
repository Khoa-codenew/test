/*Viết chương trình nhập vào một dãy kí tự. Nếu nhập vào chữ cái
thường thì chương trình sẽ biến đổi lại chữ Hoa,Nếu nhập vào chữ cái
Hoa thì biến đổi thành chữ thường*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout<<"Nhap chuoi: ";
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a' && s[i]<='z') s[i]-=32;
        else if(s[i]>='A' && s[i]<='Z') s[i]+=32;
    }
    cout<<"Chuoi sau khi bien doi: "<<s;
}