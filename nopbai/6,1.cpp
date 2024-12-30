#include <iostream>
using namespace std;

struct phanso {
    int tu;
    int mau;
};

// Function declarations
void nhapmangps(phanso ps[], int &n);
void xuatmangps(phanso ps[], int n);
void timmax(phanso ps[], int n);
void sum(phanso ps[], int n);
void sx(phanso ps[], int n);
int uscln(int a, int b);
void rutgon(phanso &ps);

int main() {
    phanso ps[1000];
    int n;
    nhapmangps(ps, n);
    timmax(ps, n);
    sum(ps, n);
    sx(ps, n);
    xuatmangps(ps, n);
}

void nhapmangps(phanso ps[], int &n) {
    do {
        cout << "Nhap so luong n: ";
        cin >> n;
    } while (n <= 0);
    
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan so thu " << i + 1 << ": ";
        cin >> ps[i].tu >> ps[i].mau;
    }
}

void xuatmangps(phanso ps[], int n) {
    for (int i = 0; i < n; i++) {
        rutgon(ps[i]);
        cout << ps[i].tu << "/" << ps[i].mau << "; ";
    }
    cout << endl;
}

void timmax(phanso ps[], int n) {
    phanso psmax = ps[0];
    for (int i = 1; i < n; i++) {
        if (ps[i].tu * psmax.mau > psmax.tu * ps[i].mau) {
            psmax = ps[i];
        }
    }
    cout << "Phan so lon nhat la: " << psmax.tu << "/" << psmax.mau << endl;
}

int uscln(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void sum(phanso ps[], int n) {
    phanso tong = {0, 1};  // Initialize sum with 0/1

    for (int i = 0; i < n; i++) {
        tong.tu = tong.tu * ps[i].mau + ps[i].tu * tong.mau;
        tong.mau = tong.mau * ps[i].mau;
        rutgon(tong);  // Reduce after every sum
    }
    
    cout << "Tong cac phan so la: " << tong.tu << "/" << tong.mau << endl;
}

void hoanvi(phanso &ps1, phanso &ps2) {
    phanso temp = ps1;
    ps1 = ps2;
    ps2 = temp;
}

void sx(phanso ps[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ps[i].tu * ps[j].mau > ps[j].tu * ps[i].mau) {
                hoanvi(ps[i], ps[j]);
            }
        }
    }
}

void rutgon(phanso &ps) {
    int uc = uscln(ps.tu, ps.mau);
    ps.tu /= uc;
    ps.mau /= uc;
}
