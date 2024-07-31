// 1010

#include <stdio.h>

int main() {

    int i, j, k, T, N, M;
    long long result;
    scanf("%d", &T);

    for (i = 0; i < T; i++) {
        scanf(" %d %d", &N, &M);

        result = 1;
        for (j = M - N + 1, k = 1; j <= M; j++, k++) {
            result = result * j / k;
        }
        printf("%lld\n", result);
    }
}
