#include "cstdio"
#include "cmath"

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    double p = 1.0 / 2 * (a + b + c);
    double area = pow(p * (p - a) * (p - b) * (p - c), 1.0 / 2);
    printf("%.1f", area);
    return 0;
}
