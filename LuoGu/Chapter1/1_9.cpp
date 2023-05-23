#include <iostream>
#include <cmath>

int main() {
    double r = 5;
    const double PI = 3.141593;
//    #define PI 3.141593
    std::cout << 2 * PI * r << std::endl;
    std::cout << PI * r * r <<std::endl;
//    Can't write like: 4/3*PI*pow(r,3)
    std::cout << 4.0 / 3 * PI * pow(r, 3) << std::endl;
    return 0;
}
