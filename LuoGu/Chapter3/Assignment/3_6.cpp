#include <cstdio>

unsigned long long maxn, minn;
unsigned long long max_common_divisor(unsigned long long a, unsigned long long b);
int main() {
    unsigned long long a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    minn = a, maxn = a;
    if (b < minn) {
        minn = b;
    }
    if (c < minn) {
        minn = c;
    }
    if (b > maxn) {
        maxn = b;
    }
    if (c > maxn) {
        maxn = c;
    }
    printf("%d/%d", max_common_divisor(minn, maxn), max_common_divisor(maxn, minn));
    return 0;
}

unsigned long long max_common_divisor(unsigned long long a, unsigned long long b) {
    unsigned long long mcd;
    for (int i = a; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            mcd = i;
            break;
        }
    }
    return a/mcd;
}