#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cout << "Nhập hệ số a: ";
    cin >> a;
    cout << "Nhập hệ số b: ";
    cin >> b;
    cout << "Nhập hệ số c: ";
    cin >> c;

    if (a == 0) {
        cout << "Đây không phải là phương trình bậc hai." << endl;
    } else {
        double delta = b * b - 4 * a * c;
        if (delta < 0) {
            cout << "Phương trình vô nghiệm." << endl;
        } else if (delta == 0) {
            double x = -b / (2 * a);
            cout << "Phương trình có nghiệm kép: x = " << x << endl;
        } else {
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "Phương trình có hai nghiệm phân biệt: x1 = " << x1 << ", x2 = " << x2 << endl;
        }
    }

    return 0;
}
