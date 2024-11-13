// 2875

#include <stdio.h>
int main() {

    int N, M, K;
    int max;
    scanf("%d %d %d", &N, &M, &K);

    if (N / 2 < M) max = N / 2;
    else max = M;

    K -= (N + M - 3 * max);

    if (K > 0) {
        K--;
        max -= (K / 3) + 1;
    }

    printf("%d", max);
    return 0;

}