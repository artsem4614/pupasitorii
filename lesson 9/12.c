#include <stdio.h>
#define NUM 10

int main() {
    int mas[NUM];
    int i, temp;

    // Считываем 10 элементов массива
    for(i = 0; i < NUM; i++) {
        scanf("%d", &mas[i]);
    }

    // Сохраняем последний элемент
    temp = mas[NUM - 1];

    // Сдвигаем элементы вправо на 1 позицию
    for(i = NUM - 1; i > 0; i--) {
        mas[i] = mas[i - 1];
    }

    // Присваиваем первому элементу сохранённое значение
    mas[0] = temp;

    // Выводим изменённый массив
    for(i = 0; i < NUM; i++) {
        printf("%d", mas[i]);
        if(i < NUM - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
