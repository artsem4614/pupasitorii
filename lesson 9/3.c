#include <stdio.h>
#include <stdlib.h>

#define NUM 10

int main() {
    int mas[NUM];
    int d;
    int min, max;
    int ind = 1, ex = 1;
    int i;

    if (scanf("%d", &d) != 1) {
        return 1;
    }
    mas[0] = d;
    min = max = mas[0];

    for (i = 1; i < NUM; i++) {
        if (scanf("%d", &d) != 1) {
            return 1;
        }
        mas[i] = d;

        if (mas[i] < min) {
            min = mas[i];
            ind = i + 1;
        }

        if (mas[i] > max) {
            max = mas[i];
            ex = i + 1;
        }
    }

    printf("%d %d %d %d\n", ex, max, ind, min);
    return 0;
}
