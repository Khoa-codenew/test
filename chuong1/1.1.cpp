#include <iostream>
using namespace std;
int main(){
float a1,a2,b1,b2,c1,c2,D,Dx,Dy,x,y;
  cout << "Nhap he so phuong trinh 1: "; cin>>a1>>b1>>c1;
  cout << "Nhap he so phuong trinh 2: "; cin>>a2>>b2>>c2;
    D=a1*b2-a2*b1;
    Dx=b1*c2-b2*c1;
    Dy=a1*c2-a2*c1;
    if(D!=0){
        x=Dx/D;y=Dy/D;
        cout <<"nghiem cua phuong trinh la:\n x="<<x<<"\ny="<<y;
    }
    else if(Dx==Dy==0) cout<<"HPT vo s0 nghiem";
         else if(Dx!=0 || Dy!=0) cout<<"HPT vo nghiem";
  
    
    return 0;
}