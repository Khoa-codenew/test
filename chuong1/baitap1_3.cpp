#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Nhap 3 so nguyen a,b,c:";
    cin>>a>>b>>c;
    int max=a;
    int min=a;
    if (max<b){max=b;}
    if (max<c){max=c;}
    if (min>b){min=b;}
    if (min>c){min=c;}
    cout<<"max 3 so a b c la:"<<max<<'\n';
    cout<<"min 3 so a b c la:"<<min<<'\n';
}