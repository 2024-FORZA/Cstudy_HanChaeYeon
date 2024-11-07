// 2869

#include <stdio.h>

int main() {

    int a, b, v, result;
    scanf("%d %d %d", &a, &b, &v);

    result = (v - b - 1) / (a - b) + 1;


    printf("%d", result);



    return 0;
}