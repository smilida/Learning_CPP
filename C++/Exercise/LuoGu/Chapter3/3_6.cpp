#include <iostream>

int main() {
    char opt;
    std::cin >> opt;
    switch (opt) {
        case 'G': std::cout << "Hello, my master!" << std::endl;
        case 'N': std::cout << "I'm Xiaoluo." << std::endl;
            break;
        case 'S': std::cout << "Teinei teinei teinei~" << std::endl;
            break;
        case 'B':
        case 'Q': std::cout << "Bye bye!" << std::endl;
            break;
        default: std::cout << "Sorry.." << std::endl;
    }
    return 0;
}
