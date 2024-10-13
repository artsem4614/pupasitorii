#include<stdio.h>
#define NUM 10
int main() {
    int mas[NUM];
    int d;
    int min;
    int max;
    int ind, ex;
    min = max = mas[0];
    ind= 1;
    ex = 1;
    for (int i =0; i<NUM; i++){
        scanf("%d", &d);
        mas[i] = d;
        if (mas[i]< min){
            min = mas[i];
            ind = i+1;
        }else if (mas[i]> max) {
            max =mas[i];
            ex=i+1;

        }
            
        }
    printf("%d %d %d %d",ex,max,ind,min);
}