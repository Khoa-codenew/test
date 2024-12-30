/*Viết trò chơi bao - đá - kéo với luật chơi: bao thắng đá, đá thắng kéo, kéo
thắng bao. Người dùng nhập vào một trong ba ký tự b (bao), d (đá), k (kéo); máy
tính sinh ngẫu nhiên một trong ba ký tự trên, thông báo kết quả chơi.*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
char computerChoice()
{
    switch (rand() % 3)
    {
    case 0:
        return 'b';
    case 1:
        return 'd';
    default:
        return 'k';
    }
}
int main()
{
    char computer, human;
    unsigned h, c;
    h = c = 0;
    srand(time(0));
    while (1)
    {
        cout << "NHap ki tu b,d,k, ky tu khac de ket thuc:";
        cin >> human;
        if (human != 'b' && human != 'd' && human != 'k')
            break;
        computer = computerChoice();
        cout << "May tinh chon " << computer << endl;
        while (getchar() != '\n')
        {
        };
        switch (human)
        {
        case 'b':
            if (computer == 'b')
                break;
            if (computer == 'd')
                h++;
            else
                c++;
            break;
        case 'd':
            if (computer == 'd')
                break;
            if (computer == 'k')
                h++;
            else
                c++;
            break;
        case 'k':
            if (computer == 'k')
                break;
            if (computer == 'b')
                h++;
            else
                c++;
            break;
        default:
            return 0;
            break;
        }

        cout << "Ban " << h << " May tinh " << c << endl;
    }
    return 0;
}