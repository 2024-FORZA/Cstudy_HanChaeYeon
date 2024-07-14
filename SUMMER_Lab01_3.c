// 1247

#include <stdio.h>
#include <limits.h>

int main() {
    int n, over_plus, over_minus;
    long long buf, sum, b_sum;
    for (int i = 0; i < 3; i++) {
        scanf("%d", &n);
        over_plus = 0;
        over_minus = 0;
        sum = 0;
        for (int j = 0; j < n; j++) {
            scanf("%lld", &buf);
            b_sum = sum;
            sum += buf;
            if (b_sum > 0 && sum < 0 && buf > 0) {
                over_plus++;
            }
            else if (b_sum < 0 && sum > 0 && buf < 0) {
                over_minus++;
            }
        }
        if (over_plus == over_minus) {
            if (sum == 0)
                printf("0\n");
            else if (sum > 0)
                printf("+\n");
            else
                printf("-\n");
        }
        else {
            if (over_plus > over_minus)
                printf("+\n");
            else
                printf("-\n");
        }
    }
    return 0;
}
