#include <iostream>

int main() {
    int x;
    std::cin >> x;
    bool p;
    p = (x % 400 == 0) || (x % 4 == 0) && (x % 100 != 0);
    std::cout << p << std::endl;
    return 0;
}
