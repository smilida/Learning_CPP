#include <stdio.h>

int main() {
    int a, day = 1;
    scanf("%d", &a);
    while (a > 1) {
        day++;
        a /= 2;
    }
    printf("%d ", day);
    return 0;
}