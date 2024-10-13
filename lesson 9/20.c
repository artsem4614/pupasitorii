#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    for(int d=2; d<=9; d++){
        int count = N / d;
        printf("%d %d\n", d, count);
    }
    return 0;
}
