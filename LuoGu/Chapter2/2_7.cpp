#include <iostream>

int main() {
//    Answer 1
    float num;
    std::cin >> num;
    int tmp, a, b, c, d;
    tmp = num * 10;
    a = tmp % 10;
    b = tmp / 10 % 10;
    c = tmp / 100 % 10;
    d = tmp / 1000;
    std::cout << a  << '.' << b << c << d;

//    Answer 2
//    char a, b, c, dot, d;
//    std::cin >> a >> b >> c >> dot >> d;
//    std::cout << d << dot << c << b << a;
    return 0;
}

// Answer 3 use c language
//#include "cstdio"
//int main() {
//    char a, b, c, d;
//    scanf("%c%c%c.%c", &a, &b, &c, &d);
//    printf("%c.%c%c%c", d, c, b, a);
//    return 0;
//}
