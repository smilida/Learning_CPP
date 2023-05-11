#include "cstdio"
// 比较两个时间差，可以都基于0小时0分
int main() {
    int a, b, c, d, delta, ans_h, ans_min;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    delta = (c * 60 + d) - (a * 60 + b);
    ans_h = delta / 60;
    ans_min = delta % 60;
    printf("%d %d", ans_h, ans_min);
    return 0;
}
