#include <cstdio>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Not triangle\n");
    } else {
        if (a > b && a > c) {
            if (b * b + c * c > a * a) {
                printf("Acute triangle\n");
            } else if (b * b + c * c == a * a) {
                printf("Right triangle\n");
            } else {
                printf("Obtuse triangle\n");
            }
        } else if (b > a && b > c) {
            if (a * a + c * c > b * b) {
                printf("Acute triangle\n");
            } else if (a * a + c * c == b * b) {
                printf("Right triangle\n");
            } else {
                printf("Obtuse triangle\n");
            }
        } else {
            if (b * b + a * a > c * c) {
                printf("Acute triangle\n");
            } else if (b * b + a * a == c * c) {
                printf("Right triangle\n");
            } else {
                printf("Obtuse triangle\n");
            }
        }
        if (a == b || a ==c || b == c) {
            printf("Isosceles triangle\n");
        }
        if (a == b && b == c) {
            printf("Equilateral triangle\n");
        }
    }
    return 0;
}