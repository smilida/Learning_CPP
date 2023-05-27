#include <iostream>

int main() {
    int n, tmp, min_num = 100000000;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> tmp;
        if (tmp < min_num) {
            min_num = tmp;
        }
    }
    std::cout << min_num << std::endl;
    return 0;
}