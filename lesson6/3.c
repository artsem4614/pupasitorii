#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int min = 0;
    int max = 0;

    while (num > 0) {
        int digit = num % 10;
        if (digit %2 !=0) min++;
        if (digit %2 ==0) max++;
        num /= 10;
    }

    printf("%d %d\n", max, min);
    return 0;
}



