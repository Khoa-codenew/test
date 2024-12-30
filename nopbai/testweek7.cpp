#include <iostream>
using namespace std;
struct Date
{
    int ngay;
    int thang;
    int nam;
};
struct Books
{
    int ID;
    char BookName[50];
    char Author[60];
    Date outportDate;
};
void inputBook(Books book[],int &n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Nhap ID sach: ";
        cin>>book[i].ID;
        cin.ignore();

        cout<<"Nhap ten sach: ";
        cin.getline(book[i].BookName,50);
        cin.ignore();

        cout<<"Nhap ten tac gia: ";
        cin.getline(book[i].Author,60);
        cin.ignore();

        cout<<"Nhap ngay xuat ban: ";
        cin>>book[i].outportDate.ngay>>book[i].outportDate.thang>>book[i].outportDate.nam;
        cin.ignore();
    }
}
void outputBook(Books book[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"ID sach: "<<book[i].ID<<endl;
        cout<<"Ten sach: "<<book[i].BookName<<endl;
        cout<<"Tac gia: "<<book[i].Author<<endl;
        cout<<"Ngay xuat ban: "<<book[i].outportDate.ngay<<"/"<<book[i].outportDate.thang<<"/"<<book[i].outportDate.nam<<endl<<endl;
    }
}
int main()
{
    int n;
    cout<<"Nhap so luong sach: ";
    cin>>n;
    Books book[n];
    inputBook(book,n);
    outputBook(book,n);
}