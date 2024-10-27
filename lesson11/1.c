#include <stdio.h>
#include <string.h>

int main() {
    // Открываем input.txt для чтения
    FILE *inputFile = fopen("input.txt", "r");
    char buffer[101]; // Максимум 100 символов + 1 для нуль-терминатора

    // Читаем строку из файла
    fgets(buffer, sizeof(buffer), inputFile);

    // Удаляем переносы строк в конце (если есть)
    buffer[strcspn(buffer, "\r\n")] = '\0';

    // Подсчитываем количество символов
    int length = strlen(buffer);

    // Открываем output.txt для записи
    FILE *outputFile = fopen("output.txt", "w");

    // Записываем строку три раза через запятую и пробел, затем количество символов
    fprintf(outputFile, "%s, %s, %s %d", buffer, buffer, buffer, length);


    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
