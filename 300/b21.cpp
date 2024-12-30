/*Trong kỳ thi tuyển, một thí sinh sẽ trúng truyển nếu có điểm tổng kết lớn
hơn hoặc bằng điểm chuẩn và không có môn nào điểm 0. - Điểm tổng kết là tổng điểm của 3 môn thi và điểm ưu tiên. - Điểm ưu tiên bao gồm điểm ưu tiên theo khu vực và điểm ưu tiên theo đối tượng.*/
#include <iostream>
using namespace std;
int main()
{
    double diemchuan;
    double a, b, c;
    char kv = 'q';
    int doituong;
    cout << "Nhap diem chuan: ";
    cin >> diemchuan;
    cout << "Nhap diem 3 mon thi: ";
    cin >> a >> b >> c;
    double sum = a + b + c;
    while (kv != '\0')
    {
        cout << "Nhap khu vuc(A, B, C, X): ";
        if (kv == 'X')
            break;
        if (kv == 'A')
            sum += 2;
        if (kv == 'B')
            sum += 1;
        if (kv == 'C')
            sum += 0.50;
    }
    while (doituong != 0)
    {
        cout << "Nhap doi tuong (1, 2, 3, 0)";
        switch (doituong)
        {
        case 1:
            sum += 2.5;
            break;
        case 2:
            sum += 1.5;
            break;
        case 3:
            sum += 1;
            break;
        }
    }
    if (sum >= diemchuan)
        cout << "Dau [" << sum << "]";
    else
        cout << "Rot [" << sum << "]";
    return 0;
}