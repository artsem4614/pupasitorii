#include<stdio.h>
#define NUM 5

int main() {
    int mas[NUM];
    int d;
    float sum = 0;
    for (int i =0; i<NUM; i++){
        scanf("%d", &d);
        mas[i] = d;
        sum += mas[i];
        }
    printf("%.3f", sum/NUM);
}