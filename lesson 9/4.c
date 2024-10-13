#include <stdio.h>
#define NUM 10

int main() {
    int mas[NUM];
    int i;
    int max1, max2;

    for(i = 0; i < NUM; i++) {
        scanf("%d", &mas[i]);
    }

    if(mas[0] > mas[1]) {
        max1 = mas[0];
        max2 = mas[1];
    } else {
        max1 = mas[1];
        max2 = mas[0];
    }

    for(i = 2; i < NUM; i++) {
        if(mas[i] > max1) {
            max2 = max1;
            max1 = mas[i];
        }
        else if(mas[i] > max2) {
            max2 = mas[i];
        }
    }

    printf("%d\n", max1 + max2);
    return 0;
}
