// 10798 

#include <stdio.h>
#include <ctype.h>

char words[5][15];

int main() {


    int i, j;

    for (i = 0; i < 5; i++) {
        scanf("%s", words[i]);
    }

    for (i = 0; i < 15; i++) {
        for (j = 0; j < 5; j++) {
            if (words[j][i] != '\0') {
                printf("%c", words[j][i]);
            }
        }
    }

    return 0;
}