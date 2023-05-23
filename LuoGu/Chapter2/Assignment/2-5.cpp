#include "cstdio"

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int price = 1 * 10 + 9;
    int money = a * 10 + b;
    printf("%d\n", money / price);
    return 0;
}
