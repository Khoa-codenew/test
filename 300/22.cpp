/*Viết chương trình liệt kê, đếm và tính tổng các ước số của số nguyên dương 
n (n nhập từ bàn phím). */
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Vui long nhap so nguyen duong." << endl;
        return 1;
    }

    int count = 0; // Đếm số lượng ước
    int sum = 0;   // Tổng các ước

    cout << "Cac uoc so cua " << n << " la: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
            count++;
            sum += i;
        }
    }
    cout << endl;

    cout << "So luong cac uoc so: " << count << endl;
    cout << "Tong cac uoc so: " << sum << endl;

    return 0;
}
