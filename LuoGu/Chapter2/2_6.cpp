#include <iostream>

int main() {
    char ch, ans;
    std::cin >> ch;
    ans = ch - 'a' + 'A';
    std::cout << ans;
    return 0;
}
