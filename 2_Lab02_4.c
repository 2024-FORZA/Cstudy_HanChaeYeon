// 2789

#include <stdio.h>
#include <string.h>

int main() {

    int tmp;
    char word[101];
    char CAMBRIDGE[] = "CAMBRIDGE";

    scanf("%s", &word);
    int cnt = strlen(word);

    for (int i = 0; i < cnt; i++) {
        tmp = 0;
        for (int j = 0; j < 9; j++) {
            if (word[i] == CAMBRIDGE[j]) {
                tmp = 1;
                break;
            }
        }
        if (tmp == 0) printf("%c", word[i]);
    }

    return 0;

}