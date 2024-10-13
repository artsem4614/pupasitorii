#include <stdio.h>
#include <stdlib.h>

#define NUM 10

// Функция сравнения для сортировки по возрастанию
int compare_asc(const void *a, const void *b) {
    int int_a = *(const int*)a;
    int int_b = *(const int*)b;
    if(int_a < int_b) return -1;
    if(int_a > int_b) return 1;
    return 0;
}

// Функция сравнения для сортировки по убыванию
int compare_desc(const void *a, const void *b) {
    int int_a = *(const int*)a;
    int int_b = *(const int*)b;
    if(int_a < int_b) return 1;
    if(int_a > int_b) return -1;
    return 0;
}

int main() {
    int mas[NUM];
    int i;

    // Считываем 10 элементов массива
    for(i = 0; i < NUM; i++) {
        scanf("%d", &mas[i]);
    }

    // Сортируем первую половину (первые 5 элементов) по возрастанию
    qsort(mas, NUM/2, sizeof(int), compare_asc);

    // Сортируем вторую половину (последние 5 элементов) по убыванию
    qsort(mas + NUM/2, NUM/2, sizeof(int), compare_desc);

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
