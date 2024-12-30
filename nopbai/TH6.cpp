#include <iostream>
#include <string>
using namespace std;

struct SV {
    string hoten;
    int tuoi;
    float toan, ly, hoa;
};


void Nhap(SV sv[5]) {
    for (int i = 0; i < 5; i++) {
        cout << "Nhap ten sinh vien thu " << i + 1 << ": ";
        cin.ignore();  
        getline(cin, sv[i].hoten);
        cout << "Tuoi: ";
        cin >> sv[i].tuoi;
        
        do{cout << "Nhap diem toan: ";
        cin >> sv[i].toan;}while(sv[i].toan<0 && sv[i].toan>10);
        do{cout << "Nhap diem ly: ";
        cin >> sv[i].ly;}while(sv[i].ly<0 && sv[i].ly>10);
        do{cout << "Nhap diem hoa: ";
        cin >> sv[i].ly;}while(sv[i].ly<0 && sv[i].ly>10);
        
    }
}


void Xuat(SV sv[5]) {
    for (int i = 0; i < 5; i++) {
        float TB = (sv[i].toan + sv[i].ly + sv[i].hoa) / 3;
        cout << "Ten sinh vien: " << sv[i].hoten << endl;
        cout << "Tuoi: " << sv[i].tuoi << endl;
        cout << "Diem trung binh: " << TB << endl;
        cout << "-----------------------------" << endl;
    }
}


void TBmax(SV sv[5]) {
    int maxIndex = 0;  
    float maxTB = (sv[0].toan + sv[0].ly + sv[0].hoa) / 3;


    for (int i = 1; i < 5; i++) {
        float TB = (sv[i].toan + sv[i].ly + sv[i].hoa) / 3;
        if (TB > maxTB) {
            maxTB = TB;
            maxIndex = i;
        }
    }

    cout << "Sinh vien co diem trung binh cao nhat la: " << sv[maxIndex].hoten << endl;
    cout << "Diem trung binh: " << maxTB << endl;
}


void swap(SV &a, SV &b) {
    SV temp = a;
    a = b;
    b = temp;
}


void sx(SV sv[5]) {
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            float TBi = (sv[j].toan + sv[j].ly + sv[j].hoa) / 3;
            float TBj = (sv[j + 1].toan + sv[j + 1].ly + sv[j + 1].hoa) / 3;
            if (TBi < TBj) {
                swap(sv[j], sv[j + 1]); 
            }
        }
    }
}


void r(SV sv[5]) {
    cout << "\nKhen thuong:\n";
    
    for (int i = 0; i < 3 && i < 5; i++) { 
        float TB = (sv[i].toan + sv[i].ly + sv[i].hoa) / 3;
        cout << "Sinh vien hang " << (i + 1) << ": " << sv[i].hoten;
        if (i == 0) {
            cout << " - Khen thuong: 500k";
        } else if (i == 1) {
            cout << " - Khen thuong: 200k";
        } else if (i == 2) {
            cout << " - Khen thuong: 100k";
        }
        cout << endl;
    }
}

int main() {
    SV sv[5];
    Nhap(sv);      
    Xuat(sv);      
    TBmax(sv);     
    cout << "\nDanh sach sinh vien sau khi sap xep theo diem trung binh giam dan:\n";
    sx(sv);        
    Xuat(sv);      
    r(sv);         
    return 0;
}
