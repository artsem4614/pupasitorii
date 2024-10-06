#include <stdio.h>

void print_simple(int n) {
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }
    if (n > 1) {
        printf("%d", n);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Ошибка: введите положительное число.\n");
        return 1;
    }
    
    print_simple(n);
    printf("\n");
    
    return 0;
}
