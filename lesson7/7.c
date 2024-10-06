#include<stdio.h>

int main() {
    int N, P;
    scanf("%d %d", &N, &P);

    if (P < 2 || P > 9 || N < 0) {
        printf("Ошибка\n");
        return 1;
    }

    if (N == 0) {
        printf("0\n");
        return 0;
    }

    int temp = N, multiplier = 1;
    while (temp >= P) {
        temp /= P;
        multiplier *= P;
    }

    while (multiplier > 0) {
        printf("%d", N / multiplier);
        N %= multiplier;
        multiplier /= P;
    }

    printf("\n");
    return 0;
}
