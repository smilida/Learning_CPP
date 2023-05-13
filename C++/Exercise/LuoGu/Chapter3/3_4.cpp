#include <iostream>

int main() {
    int x;
    std::cin >> x;
    std::cout << "Today, I ate " << x << " apple";
    if (x != 0 && x != 1) {
        std::cout << "s." << std::endl;
    } else {
        std::cout << "." << std::endl;
    }
    return 0;
}
