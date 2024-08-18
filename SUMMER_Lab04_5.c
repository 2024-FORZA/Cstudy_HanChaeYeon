// 4539

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);

        if (x < 10) {
            printf("%d\n", x);
            continue;
        }

        int digit = 10;
        while (x >= digit) {
            x = (x + digit / 2) / digit * digit;
            digit *= 10;
        }
        printf("%d\n", x);
    }
    return 0;
}