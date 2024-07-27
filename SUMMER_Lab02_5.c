// 1735

#include <stdio.h>
int main() {
    int A1, B1, A2, B2, A3, B3;
    int cnt = 2;
    scanf("%d %d", &A1, &B1);
    scanf("%d %d", &A2, &B2);
    A3 = (A1 * B2) + (A2 * B1);
    B3 = (B1 * B2);

    while (A3 >= cnt && B3 >= cnt) {
        if (A3 % cnt != 0 || B3 % cnt != 0) {
            cnt++;
        }
        else {
            A3 = A3 / cnt;
            B3 = B3 / cnt;
        }
    }

    printf("%d %d", A3, B3);


}