#include <stdio.h>
#define NUM 12

int main() {
    int mas[NUM];
    int i, g, start, end, temp;

    // Считываем 12 элементов массива
    for(i = 0; i < NUM; i++) {
        scanf("%d", &mas[i]);
    }

    // Инверсия каждой трети массива
    for(g = 0; g < 3; g++) {
        start = g * (NUM / 3);
        end = start + (NUM / 3) - 1;
        while(start < end) {
            temp = mas[start];
            mas[start] = mas[end];
            mas[end] = temp;
            start++;
            end--;
        }
    }

    // Вывод изменённого массива одним циклом
    for(i = 0; i < NUM; i++) {
        printf("%d ", mas[i]);
    }
    printf("\n");

    return 0;
}
