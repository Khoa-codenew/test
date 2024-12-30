#include <iostream>

using namespace std;

const int MAX_SIZE = 200;

int main() {
    int a[MAX_SIZE][MAX_SIZE];
    int m, n;

    // Nhập kích thước ma trận
    cout << "Nhap so dong m: ";
    cin >> m;
    cout << "Nhap so cot n: ";
    cin >> n;

    // Nhập các phần tử của ma trận
    cout << "Nhap cac phan tu cua ma tran:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    // Tìm tổng lớn nhất của bảng con 3x3
    int maxSum = INT_MIN;
    for (int i = 0; i <= m - 3; i++) {
        for (int j = 0; j <= n - 3; j++) {
            int sum = 0;
            for (int k = i; k < i + 3; k++) {
                for (int l = j; l < j + 3; l++) {
                    sum += a[k][l];
                }
            }
            maxSum = max(maxSum, sum);
        }
    }

    // Tìm giá trị lớn nhất trong các giá trị nhỏ nhất của từng dòng
    int maxMin = INT_MIN;
    for (int i = 0; i < m; i++) {
        int minRow = a[i][0];
        for (int j = 1; j < n; j++) {
            minRow = min(minRow, a[i][j]);
        }
        maxMin = max(maxMin, minRow);
    }

    // Xuất kết quả ra màn hình
    cout << "Tong lon nhat cua bang con 3x3 la: " << maxSum << endl;
    cout << "Gia tri lon nhat trong cac gia tri nho nhat cua tung dong la: " << maxMin << endl;

    return 0;
}