// 2010

#include <stdio.h>

int main() {

    int N, s;
    int tmp = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &s);
        tmp += s;
    }

    printf("%d", tmp - (N - 1));
    return 0;

}