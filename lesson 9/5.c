#include <stdio.h>
#define NUM 12

int main() {
    int mas[NUM];
    int i;
    double sum = 0.0, average;

    for(i = 0; i < NUM; i++) {
        scanf("%d", &mas[i]);
        sum += mas[i];
    }

    average = sum / NUM;
    printf("%.2f", average);
    return 0;
}
