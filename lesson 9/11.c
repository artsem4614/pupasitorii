#include <stdio.h>
#define NUM 10

int main() {
    int mas[NUM];
    int result[NUM];
    int i, j, count;
    int res_index = 0;
    int already_added;

    // Считываем 10 элементов массива
    for(i = 0; i < NUM; i++) {
        scanf("%d", &mas[i]);
    }

    // Проходим по каждому элементу массива
    for(i = 0; i < NUM; i++) {
        count = 0;
        // Считаем количество вхождений текущего элемента
        for(j = 0; j < NUM; j++) {
            if(mas[i] == mas[j]) {
                count++;
            }
        }

        // Если элемент встречается более одного раза
        if(count > 1) {
            // Проверяем, был ли он уже добавлен в результат
            already_added = 0;
            for(j = 0; j < res_index; j++) {
                if(result[j] == mas[i]) {
                    already_added = 1;
                    break;
                }
            }
            // Если не был, добавляем его
            if(!already_added) {
                result[res_index++] = mas[i];
            }
        }
    }

    // Выводим результирующий массив
    for(i = 0; i < res_index; i++) {
        printf("%d", result[i]);
        if(i < res_index - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
