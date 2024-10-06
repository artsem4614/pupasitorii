#include<stdio.h>

unsigned long long grainsOnSquare(int N) {
    return (unsigned long long)1 << (N - 1);
}

int main() {
    int N;
    scanf("%d", &N);
    
    if (N < 1 || N > 64) {
        printf("Ошибка\n");
    } else {
        printf("%llu\n", grainsOnSquare(N));
    }
    
    return 0;
}
