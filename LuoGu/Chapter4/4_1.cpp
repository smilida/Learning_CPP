#include <iostream>

int main() {
    int L, i;
    std::cin >> L;
    for (i = 1; i <= L; i++) {
        std::cout << "Today, I ate " << i <<" apple";
        if (i != 1) {
            std::cout << "s";
        }
        std::cout << "." << std::endl;
    }
    return 0;
}