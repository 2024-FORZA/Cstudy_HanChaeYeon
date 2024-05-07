//  27433


#include <stdio.h>

long fact(int N) {
    if (N == 0) return 1;
    else
        return N * fact(N - 1);
}

int main() {
    int N;
    scanf("%d", &N);
    printf("%ld", fact(N));
}
