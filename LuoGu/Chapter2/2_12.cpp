#include "cstdio"
#include "cmath"

int main() {
    int s, v;
    scanf("%d%d", &s, &v);
//    ceil是向上取整函数，且输入输出必须为double类型
    int t_walk = ceil(1.0 * s / v) + 10;
    int from_zero = 60 * (24 + 8) - t_walk;
    int hh = (from_zero / 60) % 24;
    int mm = from_zero % 60;
    printf("%02d:%02d\n", hh, mm);
    return 0;
}
