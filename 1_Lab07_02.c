// 10809

#include <stdio.h>
#include <string.h>

int main() {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    char S[100];

    scanf("%s", S);

    for (int i = 0; i < strlen(alphabet); i++) {
        int found = 0;

        for (int j = 0; j < strlen(S); j++) {
            if (alphabet[i] == S[j]) {
                printf("%d ", j);
                found = 1;
                break;
            }
        }
        if (found == 0) {
            printf("-1 ");
        }
    }
}