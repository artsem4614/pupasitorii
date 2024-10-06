#include <stdio.h>

void print_num(int num) {
    if (num < 10) {
        printf("%d ", num);
        return;
    }
    print_num(num / 10);
    printf("%d ", num % 10);
}

int main(){
    int N;
    scanf("%d", &N);
    if (N == 0) {
        printf("0\n");
    } else {
        print_num(N);
        printf("\n");
    }
    return 0;
}
