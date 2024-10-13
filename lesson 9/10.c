#include <stdio.h>
#include <stdlib.h>

#define NUM 10

// Функция для получения последней цифры числа
int get_last_digit(int num) {
    int digit = num % 10;
    if (digit < 0)
        digit = -digit;
    return digit;
}

int main() {
    int mas[NUM];
    int i, j, key;

    // Считываем 10 элементов массива
    for(i = 0; i < NUM; i++) {
        scanf("%d", &mas[i]);
    }

    // Реализация сортировки вставками по последней цифре
    for(i = 1; i < NUM; i++) {
        key = mas[i];
        j = i - 1;

        // Перемещаем элементы, у которых последняя цифра больше, чем у ключевого элемента
        while(j >= 0 && get_last_digit(mas[j]) > get_last_digit(key)) {
            mas[j + 1] = mas[j];
            j--;
        }
        mas[j + 1] = key;
    }

    // Вывод отсортированного массива
    for(i = 0; i < NUM; i++) {
        printf("%d ", mas[i]);
    }
    printf("\n");

    return 0;
}
