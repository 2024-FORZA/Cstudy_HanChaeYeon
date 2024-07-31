// 2720

#include <stdio.h>

int main() {
    int T, C;
    int amount[] = { 25, 10, 5, 1 };
    int count[4];

    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d", &C);
        for (int j = 0; j < 4; j++) {
            count[j] = 0;
        }
        for (int j = 0; j < 4; j++) {
            while (C >= amount[j]) {
                C -= amount[j];
                count[j]++;
            }
            if (C == 0) break;
        }
        printf("%d %d %d %d\n", count[0], count[1], count[2], count[3]);
    }
    return 0;
}

