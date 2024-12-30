#include <iostream>
using namespace std;
struct Nhanvien
{
    int MNV;
    char name[50];
    float income;
    float newincome;
};
void Input(Nhanvien nv[], int &n)
{
    cout<<"Nhap so luong nhan vien: ";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cout<<"Nhap ma nhan vien: ";
        cin>>nv[i].MNV;

        cout<<"Nhap ten nhan vien: ";
        cin.getline(nv[i].name,60);

        cout<<"Nhap luong: ";
        cin>>nv[i].income;
    }
}
void newincome(Nhanvien nv[],int &n)
{
    for(int i=0;i<n; i++)
    {

    }
}