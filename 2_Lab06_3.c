// 3595

#include <stdio.h>

int main() {

    int n;
    long sum;
    scanf("%d", &n);

    long min = 1000000000;
    int num[3] = { 0 };

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (i * j > n) break;

            for (int k = 1; k <= j; k++) {
                if (i * j * k > n) break;
                if (i * j * k == n) {

                    sum = i * j + j * k + k * i;
                    if (sum < min) {
                        min = sum;
                        num[0] = i;
                        num[1] = j;
                        num[2] = k;
                    }
                }
            }
        }
    }

    printf("%d %d %d", num[0], num[1], num[2]);
    return 0;

}