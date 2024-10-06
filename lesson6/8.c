#include <stdio.h>

int main() {
    int num, sum = 0;
    scanf("%d", &num);

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    if (sum == 10) printf("YES");
    else printf("NO");

    return 0;
}
