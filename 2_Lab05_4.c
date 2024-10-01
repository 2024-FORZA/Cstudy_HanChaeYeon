// 2858

#include <stdio.h>

int main() {

    int R, B;
    int L, W;

    scanf("%d %d", &R, &B);

    for (W = 3; ; W++) {
        if ((R + B) % W == 0) {
            L = (R + B) / W;

            if (R == 2 * L + 2 * W - 4) {
                printf("%d %d", L, W);
                break;
            }
        }
    }

    return 0;

}