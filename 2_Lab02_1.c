// 2525

#include <stdio.h>

int main() {

    int A, B, C;

    scanf("%d %d", &A, &B);
    scanf("%d", &C);

    if (C >= 60) {
        A = A + (C / 60);
        B = B + (C % 60);

    }
    else {
        B = B + C;
    }

    if (B >= 60) {
        A = A + (B / 60);
        B = B % 60;
    }
    if (A >= 24) {
        A = A - 24;
    }

    printf("%d %d", A, B);
    return 0;

}