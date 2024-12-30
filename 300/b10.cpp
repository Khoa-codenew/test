/*Số bảo hiểm xã hội của Canada (SIN - Canadian Social Insurance Number)
là một số có 9 chữ số, được kiểm tra tính hợp lệ như sau: - Số phải nhất (vị trí là 1, tính từ phải sang), là số kiểm tra (check digit). - Trọng số được tính từ phải qua trái (không tính check digit), bằng s1 + s2:
+ s1 là tổng các số có vị trí lẻ.
+ Các số có vị trí chẵn nhân đôi. Nếu kết quả nhân đôi có hai chữ số thì kết quả là
tổng của hai chữ số này. s2 là tổng các kết quả.
SIN hợp lệ có tổng trọng số với số kiểm tra chia hết cho 10. */
#include <iostream>

using namespace std;

int main()
{
    int pos, t;
    long sin;
    while (1)
    {
        cout << "Nhap SIN: ";
        cin >> sin;
        if (!sin)
            break;
        int sum = sin % 10;
        sin /= 10;
        for (pos = 0; pos < 8 && sin > 0; sin /= 10, ++pos)
        {
            t = sin % 10;
            if (pos % 2)
                sum += t;
            else
                sum += (2 * t) / 10 + (2 * t) % 10;
        }
        if (pos < 8 || sin > 0 || sum % 10)
            cout << "SIN khong hop le\n";
        else
            cout << "SIN hop le\n";
    }
    return 0;
}