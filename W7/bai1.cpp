//a
#include <iostream>
#include <vector>
using namespace std;
int C(int k, int n)
{
    if(k==0 || k==n)return 1;
    else if(k==1) return n;
    else return (C(k-1,n-1) + C(k,n-1));
}
//b
void nhithucnewton(int n)
{
    cout<<"Khai trien nhi thuc Newton: ";
    for(int k=0;k<=n;k++)
    {
        cout<<C(k,n)<<"*(x^"<<k<<")";
        if(k<n)cout<<"+";
    }
}
int main()
{
    int m;
    cin>>m;
    nhithucnewton(m);
    
     int n;
    cin >> n;
//c
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];

    }

    vector<int> count(100, 0); // Mảng đếm, khởi tạo tất cả các phần tử bằng 0

    for (int num : arr) {
        count[num]++;
    }

    for (int i = 1; i <= 99; ++i) {
        if (count[i] > 0) {
            cout << i << " tần suất " << count[i] << "; ";
        }
    }

    return 0;
}