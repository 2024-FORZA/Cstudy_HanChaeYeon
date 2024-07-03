//11720

#include <stdio.h>
int main() {
    int i, j;
    int sum = 0;
    char num[100];
    scanf("%d", &i);
    scanf("%s", &num);
    for (j = 0; j < i; j++) {
        num[j] = num[j] - '0';
        sum = sum + num[j];
    }
    printf("%d", sum);
}