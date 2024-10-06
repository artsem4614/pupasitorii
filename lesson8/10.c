#include <stdio.h>

// Рекурсивная функция для проверки, является ли число простым
int is_prime(int n, int divisor) {
    if (n <= 1)
        return 0;
    if (divisor * divisor > n)
        return 1;
    if (n % divisor == 0)
        return 0;
    return is_prime(n, divisor + 1);
}

int main(){
    int N;
    scanf("%d", &N);
    if (is_prime(N, 2))
        printf("YES");
    else
        printf("NO");
    return 0;
}

