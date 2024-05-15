// 3052

#include <stdio.h>
int main() {
    int x[10], y[10], i, k;
    int result = 0;

    for (i = 0; i < 10; i++) {
        scanf("%d", &x[i]);
        int j = x[i] % 42;
        y[i] = j;

        int count = 1;
        for (k = 0; k < i; k++) {
            if (j == y[k]) {
                count = 0;
                break;
            }
        }
        if (count == 1) {
            result++;
        }
    }
    printf("%d", result);
}