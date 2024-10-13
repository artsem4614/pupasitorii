#include <stdio.h>

#define NUM 10

int main() {
    int mas[NUM];
    int i, j;
    int max_count = 1; // Максимальная частота, минимально 1
    int most_frequent = mas[0]; // Наиболее частое число

    // Считываем 10 элементов массива
    for(i = 0; i < NUM; i++) {
        if(scanf("%d", &mas[i]) != 1) {
            // Если ввод некорректен, выводим сообщение об ошибке и завершаем программу
            printf("Ошибка ввода.\n");
            return 1;
        }
    }

    // Проходим по каждому элементу массива
    for(i = 0; i < NUM; i++) {
        int count = 1; // Считаем текущее число как уже встреченное один раз

        // Считаем, сколько раз mas[i] встречается в массиве
        for(j = i + 1; j < NUM; j++) {
            if(mas[i] == mas[j]) {
                count++;
            }
        }

        // Если текущая частота больше максимальной, обновляем max_count и most_frequent
        if(count > max_count) {
            max_count = count;
            most_frequent = mas[i];
        }
    }

    // Выводим наиболее частое число
    printf("%d\n", most_frequent);

    return 0;
}
