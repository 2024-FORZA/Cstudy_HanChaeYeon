// 11006

#include <stdio.h>

int main() {

    int T, N, M, U, j;
    scanf("%d", &j);

    for (int i = 0; i < j; i++) {
        scanf("%d %d", &N, &M);

        T = N - M;
        U = M - T;

        printf("%d %d\n", U, T);

    }

    return 0;
}
