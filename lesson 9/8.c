#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Функция сравнения для сортировки в порядке убывания
int compare_desc(const void *a, const void *b) {
    char char_a = *(const char *)a;
    char char_b = *(const char *)b;
    // Сортируем в порядке убывания
    if (char_a < char_b) return 1;
    if (char_a > char_b) return -1;
    return 0;
}

int main() {
    char number[20]; // Предполагаем, что число не длиннее 19 цифр
    scanf("%s", number); // Считываем число как строку

    int len = strlen(number);

    // Сортируем цифры в порядке убывания
    qsort(number, len, sizeof(char), compare_desc);

    // Печатаем отсортированное число
    printf("%s\n", number);

    return 0;
}
