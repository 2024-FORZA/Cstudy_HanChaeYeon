// 1978

#include <stdio.h>

int main() {

    int N, x, cnt;
    scanf("%d", &N);

    cnt = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d", &x);
        if (x == 1) continue;

        int tmp = 0;
        for (int j = 2; j < x; j++) {
            if (x % j == 0) {
                tmp = 1;
                break;
            }
        }
        if (tmp == 0) cnt++;
    }

    printf("%d", cnt);
    return 0;

}