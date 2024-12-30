#include <iostream>
int main() {
    int a, b, c, d;
    std::cout << "Nhập 4 số nguyên: ";
    std::cin >> a >> b >> c >> d;
    if (a > b) std::swap(a, b); /* n=a;
                                    a=b;
                                    b=n;*/
    if (a > c) std::swap(a, c);
    if (a > d) std::swap(a, d);
    if (b > c) std::swap(b, c);
    if (b > d) std::swap(b, d);
    if (c > d) std::swap(c, d);
    std::cout << "Các số theo thứ tự tăng dần: ";
    std::cout << a << " " << b << " " << c << " " << d << std::endl;

    return 0;
}
