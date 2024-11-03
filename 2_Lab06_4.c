// 10811

#include <stdio.h>

int main() {

    int n, m, a, b, i, j, tmp;
    int basket[100];
    scanf("%d %d", &n, &m);


    for (a = 0; a < n; a++) {
        basket[a] = a + 1;
    }

    for (a = 0; a < m; a++) {
        scanf("%d %d", &i, &j);
        for (b = i - 1; b < j; b++) {
            tmp = basket[b];
            basket[b] = basket[j - 1];
            basket[j - 1] = tmp;
            j--;
        }
    }

    for (a = 0; a < n; a++) {
        printf("%d ", basket[a]);
    }

    return 0;

}