#include <stdio.h>

// Рекурсивная функция для вычисления суммы цифр числа
int sum_digits(int n) {
    if (n == 0)
        return 0;
    else
        return (n % 10) + sum_digits(n / 10);
}

int main(){
    int N;
    scanf("%d", &N);
    printf("%d\n", sum_digits(N));
    return 0;
}
