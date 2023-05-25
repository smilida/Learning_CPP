#include <cstdio>

int main() {
    int x, n;
    scanf("%d%d", &x, &n);
    int d = n / 7 * 5;
    int r = n % 7;
    if (r > 0) {
        if (r + x ==7 || x == 7) {
            r -= 1;
        } else if (r + x >= 8) {
            r -= 2;
        }
    }
    printf("%d", (d + r) * 250);
    return 0;
}