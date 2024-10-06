#include <stdio.h>

void printNumbersPointer(int* current, int N) {
    if (*current > N)
        return;
    printf("%d ", *current);
    (*current)++;
    printNumbersPointer(current, N);
}

int main() {
    int N;
    int current = 1;
    if (scanf("%d", &N) != 1) {
        printf("Ошибка ввода.\n");
        return 1;
    }

    if (N < 1) {
        printf("Введите натуральное число.\n");
        return 1;
    }

    printNumbersPointer(&current, N);
    printf("\n");

    return 0;
}
