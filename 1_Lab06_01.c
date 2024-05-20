// 1547

#include <stdio.h>

int main() {

    int M, X, Y, i;
    int first = 1;

    scanf("%d", &M);

    for (i = 0; i < M; i++) {
        scanf("%d %d", &X, &Y);
        if (X == first)
            first = Y;
        else if (Y == first)
            first = X;
    }

    printf("%d", first);

}