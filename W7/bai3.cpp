#include <iostream>
#include <vector>

using namespace std;

int knapSack(int W, vector<int> wt, vector<int> val, int n) {
    int i, w;
    int K[n+1][W+1];

    // Biểu diễn các trường hợp cơ sở
    for (i = 0; i <= n; i++) {
        for (w = 0; w <= W; w++) {
            if (i==0 || w==0)
                K[i][w] = 0;
            else if (wt[i-1] <= w)
                K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
            else
                K[i][w] = K[i-1][w];
        }
    }

    return K[n][W];
}

int main() {
    int W = 10;  // Trọng lượng tối đa của ba lô
    vector<int> val = {60, 100, 120};  // Giá trị của các món hàng
    vector<int> wt = {10, 20, 30};  // Trọng lượng của các món hàng
    int n = val.size();

    cout << knapSack(W, wt, val, n);
    return 0;
}