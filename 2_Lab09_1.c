// 3047

#include <stdio.h>

int main(void) {

    int i;
    int num[3];
    char str[3];
    int A, B, C;
    int min = 101;
    int max = 0;

    for (i = 0; i < 3; i++) {
        scanf("%d ", &num[i]);
        if (num[i] > max) max = num[i];
        if (num[i] < min) min = num[i];
    }

    for (i = 0; i < 3; i++) {
        if (num[i] == max) C = num[i];
        else if (num[i] == min) A = num[i];
        else B = num[i];
    }

    scanf("%s", str);
    for (i = 0; i < 3; i++) {
        if (str[i] == 'A') printf("%d ", A);
        else if (str[i] == 'B') printf("%d ", B);
        else if (str[i] == 'C') printf("%d ", C);
    }
    return 0;
}