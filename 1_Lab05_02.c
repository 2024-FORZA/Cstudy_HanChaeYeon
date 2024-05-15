// 10807

#include <stdio.h>
int main() {

    int N, i, v;
    scanf("%d", &N);
    int x[N];

    for (i = 0; i < N; i++) {
        scanf("%d", &x[i]);
    }

    scanf("%d", &v);
    int count = 0;
    for (i = 0; i < N; i++) {
        if (v == x[i]) {
            count++;
        }
    }
    printf("%d", count);

}