//8958

#include <stdio.h>
#include <string.h>

int main() {
    int i, j, k, n, sum;
    char S[100];
    scanf("%d", &i);

    for (j = 0; j < i; j++) {
        n = 1;
        sum = 0;
        scanf("%s", &S);
        for (k = 0; k < strlen(S); k++) {
            if (S[k] == 'O') {
                sum = sum + n;
                n = n + 1;
            }
            if (S[k] == 'X') {
                n = 1;
            }
        }
        printf("%d\n", sum);
    }
}