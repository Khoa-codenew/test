#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Nhập độ dài 3 cạnh của tam giác: ";
    cin >> a >> b >> c;

    // Kiểm tra điều kiện để tạo thành tam giác
    if (a + b > c && a + c > b && b + c > a) {
        cout << "Đây là một tam giác." << endl;

        // Kiểm tra loại tam giác
        if (a == b && b == c) {
            cout << "Đây là tam giác đều." << endl;
        } else if (a == b || b == c || a == c) {
            cout << "Đây là tam giác cân." << endl;
        } else {
            cout << "Đây là tam giác thường." << endl;
        }
    } else {
        cout << "Ba cạnh này không tạo thành một tam giác." << endl;
    }

    return 0;
}
