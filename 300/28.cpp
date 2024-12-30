/*Viết chương trình mô phỏng hàm ROUND của Microsoft Excel, dùng làm tròn 
một số double với một số n cho trước.*/
#include <iostream>
#include <cmath>
using namespace std;

double roundExcel(double value, int decimalPlaces) {
    double factor = pow(10, decimalPlaces); // 10^n
    return round(value * factor) / factor; // round(value * 10^n) / 10^n
}

int main() {
    double number;
    int decimalPlaces;

    cout << "Nhap so can lam tron: ";  // 3.14159
    cin >> number;
    cout << "Nhap so chu so thap phan: ";
    cin >> decimalPlaces;// 2

    double roundedNumber = roundExcel(number, decimalPlaces);
    cout << "So sau khi lam tron: " << roundedNumber << endl;

    return 0;
}
