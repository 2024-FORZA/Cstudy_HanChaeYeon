// 1598

#include <stdio.h>
int main() {

    int a, b;
    scanf("%d %d", &a, &b);

    int x = abs(((b - 1) / 4 + 1) - ((a - 1) / 4 + 1));
    int y = abs(((b - 1) % 4) - ((a - 1) % 4));

    printf("%d", x + y);

}