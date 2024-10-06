
#include <stdio.h>

int nod(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    if (a <= 0 || b <= 0) {
        printf("Ошибка: введите положительные числа.\n");
        return 1;
    }
    
    printf("%d\n", nod(a, b));
    
    return 0;
}
