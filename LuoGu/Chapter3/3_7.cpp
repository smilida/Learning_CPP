#include <iostream>

int main() {
    double m, h, BMI;
    std::cin >> m >> h;
    BMI = m / h / h;
    if (BMI < 18.5) {
        std::cout << "Underweight";
    } else if (BMI < 24){
        std::cout << "Normal";
    } else {
        std::cout << BMI << std::endl;
        std::cout << "Overweight" << std::endl;
    }
    return 0;
}