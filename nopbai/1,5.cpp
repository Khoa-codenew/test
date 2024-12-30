#include <iostream>
using namespace std;

void nhap(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> a[i];
    }
}

int main() {
    int n;
    do {
        cout << "Nhap so n: ";
        cin >> n;
    } while (n <= 0);
 // Dynamically allocate the array
    int a[100];
    nhap(a, n);

    int k;
    int count = 0;
    cout << "Nhap so k: ";
    cin >> k;

    for (int i = 0; i < n; i++) {
        if (a[i] == k) count++;
    }

    cout << "So phan tu co gia tri bang " << k << " la: " << count;

  // Free the dynamically allocated memory
    return 0;
}
