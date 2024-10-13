#include <stdio.h>
#define NUM 10

int main() {
    int mas[NUM];
    int i, temp;

    // Считываем 10 элементов массива
    for(i = 0; i < NUM; i++) {
        scanf("%d", &mas[i]);
    }

    // Инверсия первой половины массива (первые 5 элементов)
    for(i = 0; i < NUM/2/2; i++) {
        temp = mas[i];
        mas[i] = mas[NUM/2 -1 -i];
        mas[NUM/2 -1 -i] = temp;
    }

    // Инверсия второй половины массива (последние 5 элементов)
    for(i = NUM/2; i < NUM/2 + NUM/2/2; i++) {
        temp = mas[i];
        mas[i] = mas[NUM -1 - (i - NUM/2)];
        mas[NUM -1 - (i - NUM/2)] = temp;
    }

    // Вывод изменённого массива одним циклом
    for(i = 0; i < NUM; i++) {
        printf("%d ", mas[i]);
    }
    printf("\n");

    return 0;
}
