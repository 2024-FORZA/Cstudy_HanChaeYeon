// 10818

#include <stdio.h>
int main() {

    int N;
    scanf("%d", &N);
    int num[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &num[i]);
    }

    int min = num[0];
    int max = num[0];

    for (int i = 0; i < N; i++) {
        if (num[i] > max) max = num[i];
        if (num[i] < min) min = num[i];
    }

    printf("%d %d", min, max);

}