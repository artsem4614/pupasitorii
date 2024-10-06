#include <stdio.h>

// Рекурсивная функция для печати всех простых множителей числа
void print_prime_factors(int n, int divisor) {
    if (n < 2) {
        return; // Базовый случай: если число меньше 2, заканчиваем рекурсию
    }
    if (n % divisor == 0) {
        printf("%d ", divisor); // Печатаем текущий простой множитель
        print_prime_factors(n / divisor, divisor); // Рекурсивный вызов с делённым числом
    }
    else {
        print_prime_factors(n, divisor + 1); // Переходим к следующему потенциальному делителю
    }
}

int main(){
    int N;
    scanf("%d", &N); // Считываем натуральное число
    print_prime_factors(N, 2); // Начинаем поиск простых множителей с делителя 2
    printf("\n"); // Переход на новую строку после вывода
    return 0;
}
