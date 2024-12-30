#include <iostream>
using namespace std;

// Hàm tính giá trị của x_n
int calculateXn(int n) {
    if (n == 1 || n == 2) return 1;
long long tong =0;
for (int i=2; i<n; i++){
    tong += calculateXn(i);
}
    return tong *n;
}

int main() {
    int n ;
    cin >> n;
    int result = calculateXn(n);

    cout << "x_" << n << " = " << result << endl;

    return 0;
}
