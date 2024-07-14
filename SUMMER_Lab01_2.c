// 5622

#include <stdio.h>
#include <string.h>
int main() {
    char word[15];
    int time = 0;

    scanf("%s", word);
    int n = strlen(word);

    for (int i = 0; i < n; i++) {
        if (word[i] == 'A' || word[i] == 'B' || word[i] == 'C') {
            time += 3;
        }
        if (word[i] == 'D' || word[i] == 'E' || word[i] == 'F') {
            time += 4;
        }
        if (word[i] == 'G' || word[i] == 'H' || word[i] == 'I') {
            time += 5;
        }
        if (word[i] == 'J' || word[i] == 'K' || word[i] == 'L') {
            time += 6;
        }
        if (word[i] == 'M' || word[i] == 'N' || word[i] == 'O') {
            time += 7;
        }
        if (word[i] == 'P' || word[i] == 'Q' || word[i] == 'R' || word[i] == 'S') {
            time += 8;
        }
        if (word[i] == 'T' || word[i] == 'U' || word[i] == 'V') {
            time += 9;
        }
        if (word[i] == 'W' || word[i] == 'X' || word[i] == 'Y' || word[i] == 'Z') {
            time += 10;
        }
    }
    printf("%d", time);
}