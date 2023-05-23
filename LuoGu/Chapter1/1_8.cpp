#include <iostream>
#include <cmath>

int main() {
    int balance = 100;
    balance = balance + 10;
    std::cout << balance << std::endl;
    balance -= 20;
    std::cout << balance << std::endl;
    balance = 0;
    std::cout << balance << std::endl;
    return 0;
}
