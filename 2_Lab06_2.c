// 10886

#include <stdio.h>

int main() {

    int N;
    int count0 = 0;
    int count1 = 0;
    int ans[101];
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &ans[i]);
        if (ans[i] == 0) count0++;
        if (ans[i] == 1) count1++;
    }

    if (count0 > count1) {
        printf("Junhee is not cute!");
    }
    else
        printf("Junhee is cute!");

    return 0;

}