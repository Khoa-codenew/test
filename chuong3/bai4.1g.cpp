#include <iostream>
#include <cmath>

using namespace std;
bool isMersenne(int num) {
    int p = log2(num + 1);
    return (1 << p) - 1 == num;
}
int main(){
    int n;
    cin>> n;
    cout << "Các số Mersenne nhỏ hơn hoặc bằng " << n << " là:\n";
    for (int i = 2; i <= n; ++i) {
        if (isMersenne(i)) cout << i << " ";
    }
    cout << endl;

    return 0;
}