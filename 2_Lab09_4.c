// 14720

#include <stdio.h>

int main(void) {

    int n, i;
    int current = 0;
    int res = 0;
    int m[1000];
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &m[i]);
    }

    for (i = 0; i < n; i++) {
        if (m[i] == current) {
            res++;
            current = (current + 1) % 3;
        }
    }

    printf("%d", res);
    return 0;

}
