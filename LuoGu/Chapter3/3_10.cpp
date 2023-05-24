#include <iostream>

int main() {
    int t1, t2, maxtime = 8, maxday;
    std::cin >> t1 >> t2;
    if (t1 + t2 > maxtime) {
        maxtime = t1 + t2;
        maxday = 1;
    }
    std::cin >> t1 >> t2;
    if (t1 + t2 > maxtime) {
        maxtime = t1 + t2;
        maxday = 2;
    }
    std::cin >> t1 >> t2;
    if (t1 + t2 > maxtime) {
        maxtime = t1 + t2;
        maxday = 3;
    }
    std::cin >> t1 >> t2;
    if (t1 + t2 > maxtime) {
        maxtime = t1 + t2;
        maxday = 4;
    }
    std::cin >> t1 >> t2;
    if (t1 + t2 > maxtime) {
        maxtime = t1 + t2;
        maxday = 5;
    }
    std::cin >> t1 >> t2;
    if (t1 + t2 > maxtime) {
        maxtime = t1 + t2;
        maxday = 6;
    }
    std::cin >> t1 >> t2;
    if (t1 + t2 > maxtime) {
        maxtime = t1 + t2;
        maxday = 7;
    }
    std::cout << maxday;
    return 0;
}