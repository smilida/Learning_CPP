#include <iostream>

int main() {
    int x;
    std::cin >> x;
    bool p1, p2;
    p1 = x % 2 == 0;
    p2 = 4 < x && x <= 12;
    std::cout << (p1 && p2) << ' ';
    std::cout << (p1 || p2) << ' ';
    std::cout << (p1 ^ p2) << ' ';
    std::cout << (!p1 && !p2) << std::endl;
//    std::cout << !(p1 || p2);
    return 0;
}
