// 7567

#include <stdio.h>
int main() {

    int result = 10;
    char dish[50];
    scanf("%s", dish);


    for (int i = 1; dish[i] != '\0'; i++) {
        if (dish[i] == dish[i - 1]) result += 5;
        else result += 10;
    }

    printf("%d", result);
    return 0;

}