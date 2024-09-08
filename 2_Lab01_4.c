// 10813

#include <stdio.h>

int main() {

    int N, M, i, j, k;
    scanf("%d %d", &N, &M);
    int x[101];

    for (k = 1; k <= N; k++) {
        x[k] = k;
    }

    for (k = 0; k < M; k++) {
        scanf("%d %d", &i, &j);
        int num = x[i];
        x[i] = x[j];
        x[j] = num;
    }

    for (k = 1; k <= N; k++) {
        printf("%d ", x[k]);
    }
}