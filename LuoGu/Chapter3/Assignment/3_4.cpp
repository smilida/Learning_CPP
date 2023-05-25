#include <cstdio>

int main() {
    int n;
    double price;
    scanf("%d", &n);
    if (n <= 150) {
        price = n * 0.4463;
    } else if (n <= 400) {
        price = 150 * 0.4463 + (n - 150) * 0.4663;
    } else {
        price = 150 * 0.4463 + 250 * 0.4663 + (n - 400) * 0.5663;
    }
    printf("%.2f", price);
    return 0;
}