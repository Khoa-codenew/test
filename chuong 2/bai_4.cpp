#include <iostream>
using namespace std;
int main(){
    char ch;
    cout << "nhap mot chu cai: ";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z') {
        ch =ch -32;

    }
    else if ( ch >= 'A' && ch <= 'Z'){
        ch =ch +32;
    
    }
        cout << "Ket qua: " << ch << endl;
        return 0;
        
}