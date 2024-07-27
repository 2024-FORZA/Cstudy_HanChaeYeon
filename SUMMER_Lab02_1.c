// 1546

#include <stdio.h>
int main() {
    int N;
    int x[1000];
    double score[1000];
    int max = 0;
    double sum = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &x[i]);
        if (x[i] >= max) {
            max = x[i];
        }
    }
    for (int i = 0; i < N; i++) {
        score[i] = (double)x[i] / max * 100;
        sum = sum + score[i];
    }
    printf("%f", sum / N);
}