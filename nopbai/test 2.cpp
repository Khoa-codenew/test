#include <iostream>
using namespace std;
struct Point
{
    int mon1;
    int mon2;
    int mon3;
    int Avg;
};
struct Sinhvien
{
    int MSSV;
    char Name[50];
    Point point;
};
void input(Sinhvien sv[],int &n)
{
    cout<<"Nhap so luong sinh vien: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Nhap MSSV: ";
        cin>>sv[i].MSSV;

        cout<<"Nhap ten sinh vien: ";
        cin.getline(sv[i].Name,50);

        cout<<"Nhap diem mon 1: ";
        cin>>sv[i].point.mon1;

        cout<<"Nhap diem mon 2: ";
        cin>>sv[i].point.mon2;

        cout<<"Nhap diem mon 3: ";
        cin>>sv[i].point.mon3;
    }
}
void AvgP(Sinhvien sv[],int n)
{
    for(int i=0; i<n;i++)
    {
        sv[i].point.Avg = (sv[i].point.mon1 + sv[i].point.mon2 +sv[i].point.mon3)/3;
    }
}
void output(Sinhvien sv[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"MSSV: "<<sv[i].MSSV;
        cout<<"Ten sinh vien: "<<sv[i].Name;
        cout<<"Diem trung binh: "<<sv[i].point.Avg;
    }
}
