#include <stdio.h>

#define NUM 10
#define POSITIVE_MAX 10
#define NEGATIVE_MAX 10

int main() {
    int mas[NUM];
    int positive[POSITIVE_MAX];
    int negative[NEGATIVE_MAX];
    int pos_index = 0, neg_index = 0;
    int i;

    // Считываем 10 элементов массива
    for(i = 0; i < NUM; i++) {
        if(scanf("%d", &mas[i]) != 1) {
            // Если ввод некорректен, выводим сообщение об ошибке и завершаем программу
            printf("Ошибка ввода.\n");
            return 1;
        }
    }

    // Разделяем числа на положительные и отрицательные
    for(i = 0; i < NUM; i++) {
        if(mas[i] > 0) {
            // Если число положительное, добавляем его в массив положительных чисел
            positive[pos_index++] = mas[i];
        }
        else if(mas[i] < 0) {
            // Если число отрицательное, добавляем его в массив отрицательных чисел
            negative[neg_index++] = mas[i];
        }
        // Числа, равные нулю, игнорируем
    }

    // Выводим положительные числа
    for(i = 0; i < pos_index; i++) {
        printf("%d", positive[i]);
        if(i < pos_index - 1 || neg_index > 0) {
            // Добавляем пробел после числа, если это не последний элемент положительных
            // или если есть отрицательные числа для вывода
            printf(" ");
        }
    }

    // Выводим отрицательные числа
    for(i = 0; i < neg_index; i++) {
        printf("%d", negative[i]);
        if(i < neg_index - 1) {
            // Добавляем пробел после числа, если это не последний элемент отрицательных
            printf(" ");
        }
    }

    printf("\n"); // Завершаем вывод переводом строки
    return 0;
}
