#include <stdio.h>

// Рекурсивная функция для возведения числа n в степень p
int recurs_power(int n, int p) {
    if (p == 0) {
        return 1; // Базовый случай: любое число в степени 0 равно 1
    }
    return n * recurs_power(n, p - 1); // Рекурсивный случай: n^p = n * n^(p-1)
}

int main() {
    int n, p;
    scanf("%d %d", &n, &p); // Считываем два целых числа n и p
    printf("%d\n", recurs_power(n, p)); // Вызываем функцию и выводим результат
    return 0;
}
