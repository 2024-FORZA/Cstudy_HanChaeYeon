// 2884

#include <stdio.h>

int main() {

    int H, M, time;
    scanf("%d %d", &H, &M);

    time = (H * 60 + M) - 45;

    if (time < 0) time += 24 * 60;
    H = time / 60;
    M = time % 60;

    printf("%d %d", H, M);

    return 0;
}