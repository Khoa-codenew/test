#include <iostream>
#include <iomanip>

using namespace std;

double average(double a, double b, double c) {
    return (a + b + c) / 3.0; //double la cac so thuc
}

int main() {
    double a, b, c;
    cout << "Nhap 3 so bat ky: ";
    cin >> a >> b >> c;
    cout << fixed << setprecision(4);
    cout << "Gia tri trung binh la: " << average(a, b, c) << endl;
    return 0;
}
