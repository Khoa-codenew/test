#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout << "Các số hoàn chỉnh nhỏ hơn hoặc bằng " << n << " là:\n";
    for (int i = 1; i <= n; ++i) {
        int sum = 0;
        for (int j = 1; j < i; ++j) {
            if (i % j == 0) sum += j;
        }
        if (sum == i) cout << i << " ";
    }
    cout << endl;
}