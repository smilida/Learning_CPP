#include <stdio.h>

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    int Asum = 0, Bsum = 0;
    for (int i = k; i <= n; i += k) {
        Asum += i;
    }
    Bsum = (1 + n) * n / 2 - Asum;
    printf("%.1f ", double(Asum) / (n / k));
    printf("%.1f", double(Bsum) / (n - n / k));
    return 0;
}