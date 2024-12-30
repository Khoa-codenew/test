#include <iostream>
using namespace std;
struct date{
    int day;
    int month;
    int year;
};
struct product{
    int productID;
    char productName[50];
    float price;
    int quantity;
    date importDate;
};
void inputproduct(int &n){
        product pd[n];
    cout<<"Nhap so luong san pham: ";
    cin>>n;
    //Nhap info tung san pham
    for(int i=0;i<n;i++)
    {
        cout<<"Nhap ID san pham: ";
        cin.getline(pd[i].productName,50);

        cout<<"Nhap ten san pham: ";
        cin>>pd[i].productName;

        cout<<"Nhap gia san pham: ";
        cin>>pd[i].price;

        cout<<"Nhap so luong san pham: ";
        cin>>pd[i].quantity;

        cout<<"Nhap ngay nhap kho: ";
        cin>>pd[i].importDate.day>>pd[i].importDate.month>>pd[i].importDate.year;
    }
}
int main()
{
    int n;
    inputproduct(n);

}