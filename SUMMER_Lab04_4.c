// 1453

#include <stdio.h>
int main() {
    int N, num;
    int cnt = 0;
    scanf("%d", &N);
    int seat[101] = { 0 };

    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        if (seat[num] == 0) seat[num] = 1;
        else if (seat[num] == 1) cnt++;
    }

    printf("%d", cnt);
    return 0;
}