// 2577

#include <stdio.h>

int main() {

    int A, B, C, sum, num;
    int arr[10] = { 0, };

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    sum = A * B * C;

    while (sum > 0) {
        num = sum % 10;
        arr[num]++;
        sum /= 10;
    }

    for (int i = 0; i <= 9; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;

}