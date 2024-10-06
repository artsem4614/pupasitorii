#include <stdio.h>

// Рекурсивная функция для вычисления функции Аккермана
int akkerman(int m, int n) {
    if (m == 0) {
        return n + 1;
    }
    if (m > 0 && n == 0) {
        return akkerman(m - 1, 1);
    }
    if (m > 0 && n > 0) {
        return akkerman(m - 1, akkerman(m, n - 1));
    }
    return -1; // Для обработки некорректных входных данных
}

int main(){
    int m, n;
    scanf("%d %d", &m, &n);          // Считываем два неотрицательных числа m и n
    printf("%d\n", akkerman(m, n));  // Вызываем функцию Аккермана и выводим результат
    return 0;
}
