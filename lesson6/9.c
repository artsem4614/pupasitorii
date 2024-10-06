#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num <= 1) {
        printf("NO");
        return 0;
    }

    int is_prime = 1;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            is_prime = 0;
            break;
        }
    }

    if (is_prime) printf("YES");
    else printf("NO");

    return 0;
}
