#include <stdio.h>

// Рекурсивная функция для подсчета количества '1' в двоичной записи числа
int count_ones(int n) {
    if (n == 0)
        return 0;
    return (n % 2) + count_ones(n / 2);
}

int main(){
    int N;
    scanf("%d", &N);
    printf("%d\n", count_ones(N));
    return 0;
}
