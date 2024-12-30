#include <iostream>
using namespace std;
main(){
    int km;
    double tong;
    tong =0;
    cout<<"Nhap so km";
    cin >> km;
    if (km<0) {
        cout<<"So km khong hop le";
        return 1;
    }
    if (km>=1){
        tong += 15000;
    }
    if (km>=2){
        tong += min(km - 1, 4) * 13500;
    }
    if (km>=6){
        tong += (km-5)*11000;
    }
    if (km>120){tong *=0.9;}
    cout<<"Tong so tien la: "<<tong<<endl;
    return 0;
}