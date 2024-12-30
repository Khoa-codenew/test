#include <iostream>
#include <algorithm> // Để sử dụng hàm sort

using namespace std;
void swap(int &a, int &b){
    int num=a;
    a=b;
    b=num;
}

int main() {
    int a, b, c, d;
    cout << "Nhập vào 4 số nguyên: ";
    cin >> a >> b >> c >> d;

    // Đưa các số vào một mảng
    int arr[] = {a, b, c, d};

    // Sắp xếp mảng theo thứ tự tăng dần
    for(int x=0;x<3;++x){
        for(int j=0;j<3-x;++j){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    cout << "Các số sau khi sắp xếp tăng dần là: ";
    for (int i = 0; i < 4; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
