#include <iostream>
#include <cmath>
using namespace std;

struct point {
    int x;
    int y;
};

void nhap(point P[], int &n);
void xuly(point P[], int n);
void capdiemgannhat(point P[], int n);
void xet(point P[], int n);

int main() {
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    point P[n]; // Để tránh lỗi mảng tĩnh, có thể dùng mảng động nếu cần (C++ hiện đại)
    
    nhap(P, n);
    xuly(P, n);
    capdiemgannhat(P, n);
    xet(P, n);

    return 0;
}

void nhap(point P[], int &n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap diem P" << i + 1 << ": ";
        cin >> P[i].x >> P[i].y;
    }
}

void xuly(point P[], int n) {
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0, dem = 0;

    for (int i = 0; i < n; i++) {
        if (P[i].x > 0 && P[i].y > 0) count1++;
        if (P[i].x < 0 && P[i].y > 0) count2++;
        if (P[i].x < 0 && P[i].y < 0) count3++;
        if (P[i].x > 0 && P[i].y < 0) count4++;
        if (P[i].x == 0 || P[i].y == 0) dem++;
    }

    cout << "So diem nam o goc phan tu thu 1: " << count1 << endl;
    cout << "So diem nam o goc phan tu thu 2: " << count2 << endl;
    cout << "So diem nam o goc phan tu thu 3: " << count3 << endl;
    cout << "So diem nam o goc phan tu thu 4: " << count4 << endl;
    cout << "So diem nam tren truc: " << dem << endl;
}

void capdiemgannhat(point P[], int n) {
    int kc1 = -1;  // Đặt kc1 ban đầu là -1 để tìm điểm gần nhất
    int p1 = 0, p2 = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int dx = P[i].x - P[j].x;
            int dy = P[i].y - P[j].y;
            int kc = dx * dx + dy * dy;  // Tính khoảng cách bình phương

            if (kc1 == -1 || kc < kc1) {  // So sánh khoảng cách
                kc1 = kc;
                p1 = i;
                p2 = j;
            }
        }
    }

    cout << "Cap diem gan nhau nhat la: (" 
         << P[p1].x << ", " << P[p1].y << ") va ("
         << P[p2].x << ", " << P[p2].y << ")" << endl;
    cout << "Khoang cach giua hai diem: " << sqrt(kc1) << endl;
}

void xet(point P[], int n) {
    int countOn = 0, countAbove = 0, countBelow = 0;

    for (int i = 0; i < n; i++) {
        int result = 3 * P[i].x + 4 * P[i].y + 1;

        if (result == 0) countOn++;
        else if (result > 0) countAbove++;
        else countBelow++;
    }

    cout << "So diem nam tren duong thang: " << countOn << endl;
    cout << "So diem nam phia tren duong thang: " << countAbove << endl;
    cout << "So diem nam phia duoi duong thang: " << countBelow << endl;
}
