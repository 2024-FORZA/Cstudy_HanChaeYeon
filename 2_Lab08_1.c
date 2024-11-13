// 2750

#include <stdio.h>

int main() {

    int n, i, j, tmp;
    int num[1000];
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n - 1; j++) {
            if (num[j + 1] < num[j]) {
                tmp = num[j + 1];
                num[j + 1] = num[j];
                num[j] = tmp;
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d", num[i]);
        printf("\n");
    }

    return 0;

}