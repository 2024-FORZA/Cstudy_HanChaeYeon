// 5032

#include <stdio.h>

int main() {

    int e, f, c, bottle;
    int result = 0;
    scanf("%d %d %d", &e, &f, &c);

    bottle = e + f;

    while (1) {
        result += bottle / c;
        bottle = (bottle / c) + (bottle % c);

        if (bottle < c) break;



    }
    printf("%d", result);
}