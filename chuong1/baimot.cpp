#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    int a ,b ,c ,d ,x, y, z, TU, MAU;
cout << "Nhap cac he so cua mat phang (a, b, c, d): "; //nhap toa ptrinh mat phang

cin >>a>>b>>c>>d;
cout << "Nhap toa do diem A (x, y, z)";
cin >> x>> y>> z;
    TU = fabs( a*x + b*y + c*z +d); // tinh phan tu
    MAU = sqrt( a*a + b*b +c*c ); // tinh phan mau
        d = TU/MAU ;
cout << "Khoang cach tu diem den mat phang la " << d << endl;
 return 0;
}