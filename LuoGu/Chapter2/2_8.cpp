#include "cstdio"

int main() {
    double t, ans1;
    int n, ans2;
    scanf("%lf%d", &t, &n);
    ans1 = t / (n * 1.0);
    ans2 = 2 * n;
    printf("%.3f\n%d", ans1, ans2);
    return 0;
}
