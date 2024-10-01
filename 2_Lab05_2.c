// 5597

#include <stdio.h>

int main() {

    int num[28];
    int tmp;

    for (int i = 0; i < 28; i++) {
        scanf("%d", &num[i]);
    }

    for (int i = 1; i <= 30; i++) {
        tmp = 0;
        for (int j = 0; j < 28; j++) {
            if (i == num[j])
                tmp = 1;
        }
        if (tmp == 0) printf("%d\n", i);
    }

    return 0;

}