// 1475

#include <stdio.h>
#include <string.h>

int main() {
    char N[30];
    int max = 0;
    int count[10] = { 0, };
    scanf("%s", N);
    for (int i = 0; i < strlen(N); i++) {
        if (N[i] == '0') count[0]++;
        else if (N[i] == '1') count[1]++;
        else if (N[i] == '2') count[2]++;
        else if (N[i] == '3') count[3]++;
        else if (N[i] == '4') count[4]++;
        else if (N[i] == '5') count[5]++;
        else if (N[i] == '6') count[6]++;
        else if (N[i] == '7') count[7]++;
        else if (N[i] == '8') count[8]++;
        else if (N[i] == '9') count[9]++;
    }
    count[6] = (count[6] + count[9] + 1) / 2;
    count[9] = 0;
    for (int i = 0; i < 10; i++) {
        if (count[i] > max) max = count[i];
    }
    printf("%d", max);
}