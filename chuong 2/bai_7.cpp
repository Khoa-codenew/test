#include <iostream>
using namespace std;
main(){
    int a,b,c,d, min;
    cout <<"nhap bon so a,b,c,d";
    cin>> a>>b>>c>>d;
    min=a;      //gia su gia tri nho nhat la a
    if (b<min) min=b;// gia b nho hon mina nen min gio bang b
    if (c<min) min=c;
    if(d<min) min=d;
    cout<<"Gia tri nho nhat la: "<<min<<endl;
    return 0;

}