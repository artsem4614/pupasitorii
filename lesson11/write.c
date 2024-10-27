#include <stdio.h>
#include <stdlib.h>
#include "log.h"

int main() {
    FILE *file;
    file = fopen("output.txt", "w");

    // Проверка успешности открытия файла
    // if (file == NULL) {
    //     perror("Не удалось открыть файл для записи");
    //     return EXIT_FAILURE;
    // }

    char qw[] = "dsdsfds"; // Добавлена точка с запятой

    // Корректное использование fprintf: указатель на файл в качестве первого аргумента
    fprintf(file, "werwer: %s\n", qw);

    // Проверка успешности закрытия файла
    // if (fclose(file) != 0) {
    //     perror("Не удалось закрыть файл");
    //     return EXIT_FAILURE;
    // }

    return EXIT_SUCCESS;
}
