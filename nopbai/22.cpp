#include <iostream>
using namespace std;
void swap(int &a, int &b){
    int temp =a;
    a=b;
    b=temp;
}
int main(){
    int a[4];
    cout<<"Nhap 4 gia tri a,b,c,d: ";
    for (int i=0;i<4;i++)cin>>a[i];
    for(int i=0;i<4;i++){
        if(a[i]>a[i+1])swap(a[i],a[i+1]);
    }
    cout<<"So be nhat la:"<<a[0];
    cout<<"So lon nhat la:"<<a[3];
    cout<<"So sau khi sap xep la: ";
    for(int i=0;i<4;i++)cout<<a[i]<<", ";
    cout<<endl;
    int count =0;
    for (int i=0;i<4;i++){
        for (int j=i+1;j<4;j++){
            if(a[i] !=a[j])count++;
        }
    }
}