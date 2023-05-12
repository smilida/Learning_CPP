#include "cstdio"

int main() {
    int m, t, s;
    scanf("%d%d%d", &m, &t, &s);
    int eaten = s / t;
    if (eaten <= m){
        printf("%d", m - eaten);
    } else{
        printf("0");
    }
}
