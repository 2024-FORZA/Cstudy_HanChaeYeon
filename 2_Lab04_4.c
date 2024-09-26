// 5585

#include <stdio.h>

int main() {

    int price;
    int cnt = 0;

    scanf("%d", &price);
    price = 1000 - price;

    cnt += (price / 500);
    price %= 500;
    cnt += (price / 100);
    price %= 100;
    cnt += (price / 50);
    price %= 50;
    cnt += (price / 10);
    price %= 10;
    cnt += (price / 5);
    price %= 5;
    cnt += price;

    printf("%d", cnt);
    return 0;

}