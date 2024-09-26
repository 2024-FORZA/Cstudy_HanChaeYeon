// 1267

#include <stdio.h>

int main() {

    int N;
    int Y = 0;
    int M = 0;
    int time;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &time);
        Y += 10 * (time / 30 + 1);
        M += 15 * (time / 60 + 1);
    }

    if (Y > M) printf("M %d", M);
    else if (Y == M) printf("Y M %d", Y);
    else printf("Y %d", Y);

    return 0;

}