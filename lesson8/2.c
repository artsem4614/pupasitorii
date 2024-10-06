#include <stdio.h>

int main() {
    int N;
    long long sum;

    // Чтение входного числа
    if (scanf("%d", &N) != 1) {
        printf("Ошибка ввода.\n");
        return 1;
    }

    // Проверка на натуральность числа
    if (N < 1) {
        printf("Введите натуральное число.\n");
        return 1;
    }

    // Вычисление суммы по формуле
    sum = ((long long)N * (N + 1)) / 2;

    // Вывод результата
    printf("%lld\n", sum);

    return 0;
}
