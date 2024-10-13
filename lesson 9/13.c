#include <stdio.h>

#define NUM 12
#define SHIFT 4

// Функция для разворота части массива от индекса start до end
void reverse(int arr[], int start, int end) {
    int temp;
    while(start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int mas[NUM];
    int i;

    // Считываем 12 элементов массива
    for(i = 0; i < NUM; i++) {
        scanf("%d", &mas[i]);
    }

    // Корректируем значение сдвига, если оно больше размера массива
    int k = SHIFT % NUM;

    // Шаг 1: Разворот всего массива
    reverse(mas, 0, NUM - 1);

    // Шаг 2: Разворот первых k элементов
    reverse(mas, 0, k - 1);

    // Шаг 3: Разворот оставшихся элементов
    reverse(mas, k, NUM - 1);

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
