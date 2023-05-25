#include <cstdio>

int main() {
    int x0, x1, x2, x3, x4, x5, x6, x7, x8, x9;
    int h, num = 0;
    scanf("%d%d%d%d%d%d%d%d%d%d", &x0, &x1, &x2, &x3, &x4, &x5, &x6, &x7, &x8, &x9);
    scanf("%d", &h);
    if (x0 <= h + 30) {
        num += 1;
    }
    if (x1 <= h + 30) {
        num += 1;
    }
    if (x2 <= h + 30) {
        num += 1;
    }
    if (x3 <= h + 30) {
        num += 1;
    }
    if (x4 <= h + 30) {
        num += 1;
    }
    if (x5 <= h + 30) {
        num += 1;
    }
    if (x6 <= h + 30) {
        num += 1;
    }
    if (x7 <= h + 30) {
        num += 1;
    }
    if (x8 <= h + 30) {
        num += 1;
    }
    if (x9 <= h + 30) {
        num += 1;
    }
    printf("%d", num);
    return 0;
}