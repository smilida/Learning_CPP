#include <iostream>

int main() {
    int n;
    std::cin >> n;
    if ((5 * n) < (11 + 3 * n)) {
        std::cout << "Local" << std::endl;
    } else {
        std::cout << "Luogu" << std::endl;
    }
    return 0;
}
