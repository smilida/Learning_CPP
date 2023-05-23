#include <iostream>
#include <cmath>
#define PI 3.141593
int main() {
    int ans, r1 = 4, r2 = 10;
//    wrong: 4 / 3, right: 4.0 / 3
    double V = (4.0 / 3) * PI * (pow(r1, 3) + pow(r2, 3));
//    wrong: 1 / 3, right: 1.0 / 3
    ans = pow(V, 1.0/3);
    std::cout << ans << std::endl;
    return 0;
}
