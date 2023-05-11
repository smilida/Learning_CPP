#include "cstdio"

int main() {
//    Answer 1 （四舍五入注意使用+0.5，注意浮点数误差）
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", int(a * 0.2 + b * 0.3 + c * 0.5 + 0.5));
//    Answer 2 （这种方法可以将浮点数误差避免）
//    printf("%d", a * 2 / 10 + b * 3 / 10 + c * 5 / 10);
    return 0;
}
