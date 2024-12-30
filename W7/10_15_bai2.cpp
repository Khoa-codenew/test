#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    int arr[n];
    cout<<"Nhap so phan tu: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Nhap phan tu thu "<<i+1<<" : ";
        cin>>arr[i];
    }
    int maxDiff = abs(arr[0] - arr[1]);
    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int diff = abs(arr[j] - arr[i]);
            if (diff > maxDiff) {
                maxDiff = diff;
            }
        }
    }
    cout<<"Hai so co khoang cach lon nhat la: "<<maxDiff<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           if(arr[j]>arr[i]) swap(arr[i],arr[j]); 
        }
    }
    cout<<"Phan tu co gia tri lon nhat la: "<<arr[0]<<endl;
    cout<<"Phan tu co gia tri lon thu 2 la: "<<arr[1]<<endl;
    cout<<"Phan tu co gia tri lon thu 3 la: "<<arr[2]<<endl;
    

}