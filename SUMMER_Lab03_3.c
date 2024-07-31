// 1284

#include <stdio.h>
#include <string.h>

int main() {
    int num;
    char N[6];

    while (1) {
        scanf("%d", &num);

        if (num == 0) break;

        sprintf(N, "%d", num);

        int total = 0;
        int count = strlen(N);

        for (int i = 0; i < count; i++) {
            if (N[i] == '1') total += 2;
            else if (N[i] == '0') total += 4;
            else total += 3;
        }

        total = total + count + 1;
        printf("%d\n", total);
    }
}
