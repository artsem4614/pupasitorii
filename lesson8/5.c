#include <stdio.h>

void print_binary(int num) {
    if (num > 1)
        print_binary(num / 2);
    printf("%d", num % 2);
}

int main(){
    int N;
    scanf("%d", &N);
    if(N == 0){
        printf("0");
    }
    else{
        print_binary(N);
    }
    printf("\n");
    return 0;
}
