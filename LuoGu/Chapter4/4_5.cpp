#include <stdio.h>
#include <cstdlib>
# include <ctime>

int main() {
    int answer, guess;
    srand(time(0));
    answer = rand() % 100 + 1;
    printf("%d", answer);
    do {
        scanf("%d", &guess);
        if (guess > answer){
            printf("Too large\n");
        }
        if (guess < answer){
            printf("Too small\n");
        }
    } while (guess != answer);
    printf("You are right!!");
    return 0;
}