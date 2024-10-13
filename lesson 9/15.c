#include <stdio.h>
#include <stdlib.h>

#define NUM 10

// Функция для получения второй цифры с конца числа
int get_tens_digit(int num) {
    num = abs(num); // Обработка отрицательных чисел
    if (num < 10)
        return 0; // Для однозначных чисел
    return (num / 10) % 10;
}

int main() {
    int mas[NUM];
    int result[NUM];
    int res_index = 0;
    int i;
    int current_tens;

    // Считываем 10 элементов массива
    for(i = 0; i < NUM; i++) {
        if(scanf("%d", &mas[i]) != 1) {
            printf("Ошибка ввода.\n");
            return 1;
        }
    }

    // Проходим по каждому элементу массива
    for(i = 0; i < NUM; i++) {
        current_tens = get_tens_digit(mas[i]);
        if(current_tens == 0) {
            result[res_index++] = mas[i];
        }
    }

    // Выводим результирующий массив, если есть такие элементы
    if(res_index > 0) {
        for(i = 0; i < res_index; i++) {
            printf("%d", result[i]);
            if(i < res_index - 1) {
                printf(" ");
            }
        }
    }
    printf("\n");

    return 0;
}
