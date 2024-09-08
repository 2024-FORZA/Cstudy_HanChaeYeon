// 2908

#include <stdio.h>

int main() {

    int A, B, result;
    int new_A, new_B;
    int A_first, A_second, A_third;
    int B_first, B_second, B_third;
    scanf("%d %d", &A, &B);

    A_first = A / 100;
    new_A = A % 100;
    A_second = new_A / 10;
    new_A = new_A % 10;
    A_third = new_A;

    B_first = B / 100;
    new_B = B % 100;
    B_second = new_B / 10;
    new_B = new_B % 10;
    B_third = new_B;

    new_A = (A_third * 100) + (A_second * 10) + (A_first);
    new_B = (B_third * 100) + (B_second * 10) + (B_first);
    if (new_A > new_B) result = new_A;
    else result = new_B;

    printf("%d", result);
}