#include <iostream>

int main() {
    int v_a = 5, v_yao = 8, distance = 100;
    double delta, ans;
    delta = v_yao - v_a;
    ans = distance / delta;
//    ans = 1.0 * distance / (v_yao - v_a)
    std::cout << ans << std::endl;
    return 0;
}
