// 2309

#include <stdio.h>
int main() {
    int dwarf[9];
    int total = 0;
    int over = 0;
    int i, j;

    for (i = 0; i < 9; i++) {
        scanf("%d", &dwarf[i]);
        total = total + dwarf[i];
    }

    over = total - 100;
    int p, q = 0;
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 9; j++) {
            if ((dwarf[i] + dwarf[j]) == over) {
                p = i;
                q = j;
                break;
            }
        }
    }

    int tmp;
    int dwarf2[7];
    j = 0;
    for (i = 0; i < 9; i++) {
        if (i != p && i != q) {
            dwarf2[j] = dwarf[i];
            j++;
        }
    }

    for (i = 0; i < 7; i++) {
        for (j = i + 1; j < 7; j++) {
            if (dwarf2[i] > dwarf2[j]) {
                tmp = dwarf2[i];
                dwarf2[i] = dwarf2[j];
                dwarf2[j] = tmp;
            }
        }
    }

    for (i = 0; i < 7; i++) {
        printf("%d\n", dwarf2[i]);
    }
}