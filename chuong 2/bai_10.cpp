#include <iostream>
using namespace std;
int main() {
    int month, year;
    cout << "Nhập tháng và năm: ";
    cin >> month >> year;

    int days;

    if (month == 2) {

        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            days = 29;
        } else {
            days = 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } else if (month >= 1 && month <= 12) {
        days = 31;
    } else {
        cout << "Tháng không hợp lệ!" << endl;
        return 1;
    }

    cout << "Tháng " << month << " năm " << year << " có " << days << " ngày." << endl;

    return 0;
}
