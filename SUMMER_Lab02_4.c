// 1065

#include <stdio.h>

int main() {

    int N, A, B, C;
    int cnt = 99;
    scanf("%d", &N);
    if (N < 100) printf("%d", N);
    else {
        for (int i = 100; i <= N; i++) {
            A = i / 100;
            B = i / 10 % 10;
            C = i % 10;
            if ((C - B) == (B - A)) cnt++;
        }
        printf("%d", cnt);
    }

}