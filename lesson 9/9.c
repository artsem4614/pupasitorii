#include <stdio.h>
#define NUM 10

int main() {
    int mas[NUM];
    int i, j, count;
    int flag = 1;
    
    for(i = 0; i < NUM; i++) {
        scanf("%d", &mas[i]);
    }
    
    for(i = 0; i < NUM; i++) {
        count = 0;
        for(j = 0; j < NUM; j++) {
            if(mas[i] == mas[j]) {
                count++;
            }
        }
        if(count == 1) {
            if(flag) {
                printf("%d", mas[i]);
                flag = 0;
            }
            else {
                printf(" %d", mas[i]);
            }
        }
    }
    printf("\n");
    return 0;
}
