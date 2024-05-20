// 1037

#include <stdio.h>

int main() {

    int i, j, k;
    int max = 0;
    int min = 1000000;

    scanf("%d", &i);

    for (j = 0; j < i; j++) {
        scanf("%d", &k);
        if (k > max) {
            max = k;
        }
        if (k < min) {
            min = k;
        }
    }

    printf("%d", max * min);

}