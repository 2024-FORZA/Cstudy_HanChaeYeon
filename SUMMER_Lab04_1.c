// 1152

#include <stdio.h>
#include <string.h>

int main() {
    char S[1000000];
    scanf("%[^\n]", S);

    int S_len = strlen(S);
    int cnt = 0;

    if (S_len == 1 && S[0] == ' ') {
        printf("0");
        return 0;
    }

    for (int i = 1; i < S_len - 1; i++) {
        if (S[i] == ' ') cnt++;
    }
    printf("%d", cnt + 1);
    return 0;
}