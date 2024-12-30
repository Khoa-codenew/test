#include <iostream>

using namespace std;

int main() {
    double a, b;
    cout << "Nhập hệ số a: ";
    cin >> a;
    cout << "Nhập hệ số b: ";
    cin >> b;

    if (a == 0) {
        if (b == 0) {
            cout << "Phương trình có vô số nghiệm." << endl;
        } else {
            cout << "Phương trình vô nghiệm." << endl;
        }
    } else {
        double x = -b / a;
        cout << "Nghiệm của phương trình là: x = " << x << endl;
    }

    return 0;
}