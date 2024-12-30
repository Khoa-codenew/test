#include <iostream>
#include <cmath> // Để sử dụng hàm sqrt (căn bậc hai)

using namespace std;

int main() {
    int n;
    cout << "Nhập số nguyên dương n: ";
    cin >> n;

    cout << "Các số chính phương nhỏ hơn hoặc bằng " << n << " là:\n";

    for (int i = 1; i * i <= n; ++i) {
        cout << i * i << " ";
    }

    cout << endl;
    return 0;
}
