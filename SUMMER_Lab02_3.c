// 11005

#include <stdio.h>
#include <string.h>
int main() {
    int N, B;
    char a[100];
    scanf("%d %d", &N, &B);

    int i = 0;
    while (N != 0) {
        if (N % B < 10)
            a[i] = (N % B) + '0';
        else
            a[i] = (N % B) + 'A' - 10;
        N /= B;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", a[j]);
    }
}
