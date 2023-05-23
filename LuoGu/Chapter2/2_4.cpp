#include <iostream>
#include <cmath>

int main() {
    double a = 1, b = -100, c = 2400;
    double delta, ans;
    delta = pow(b, 2) - 4 * a * c;
    ans = (-b + sqrt(delta)) / (2 * a);
    std::cout << 110 - int(ans + 0.5) << std::endl;
    return 0;
}
