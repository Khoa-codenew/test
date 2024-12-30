#include <iostream>
using namespace std;
main(){
    int so;
    cout <<" nhap mot so nguyen";
    cin >> so;
    if (so>=0 && so<=9){
        cout <<"So cua ban la: "<< so << '\n';
    }
    else {
        cout <<"Khong the doc duoc ";

    }
    return 0;
    
}