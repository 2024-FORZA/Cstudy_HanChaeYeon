// 2979

#include <stdio.h>

int main(void) {

    int A, B, C;
    int start[3], end[3];
    int parking[101] = { 0 };
    int total = 0;

    scanf("%d %d %d", &A, &B, &C);

    for (int i = 0; i < 3; i++) {
        scanf("%d %d", &start[i], &end[i]);
        for (int j = start[i]; j < end[i]; j++) {
            parking[j]++;
        }
    }

    for (int i = 0; i <= 100; i++) {
        if (parking[i] == 1) {
            total += A;
        }
        else if (parking[i] == 2) {
            total += 2 * B;
        }
        else if (parking[i] == 3) {
            total += 3 * C;
        }
    }

    printf("%d", total);
    return 0;
}