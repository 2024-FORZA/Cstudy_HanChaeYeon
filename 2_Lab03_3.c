// 1712

#include <stdio.h>
int main() {

    int a, b, c, x;
    scanf("%d %d %d", &a, &b, &c);

    x = a / (c - b) + 1;
    if (b >= c) printf("-1");
    else printf("%d", x);


    return 0;
}