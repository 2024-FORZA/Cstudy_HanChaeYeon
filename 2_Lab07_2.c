// 5073

#include <stdio.h>

int main() {

    int a, b, c;

    while (1) {

        scanf("%d %d %d", &a, &b, &c);
        if (a == 0 && b == 0 && c == 0) break;

        else if (a >= b + c || b >= a + c || c >= a + b) {
            printf("Invalid\n");
        }
        else if (a == b && b == c) {
            printf("Equilateral\n");
        }
        else if (a == b || b == c || c == a) {
            printf("Isosceles\n");
        }
        else if (a != b && b != c && c != a) {
            printf("Scalene\n");
        }
    }

    return 0;

}