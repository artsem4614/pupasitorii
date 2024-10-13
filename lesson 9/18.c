#include <stdio.h>

int main() {
    int N;
    
    // Считываем значение N
    if(scanf("%d", &N) != 1) {
        printf("Ошибка ввода.\n");
        return 1;
    }
    
    // Проверяем, что N находится в заданных пределах
    if(N <= 2 || N > 10000) {
        printf("N должно быть больше 2 и не превышать 10000.\n");
        return 1;
    }
    
    // Для каждого числа от 2 до 9 считаем количество кратных чисел
    for(int d = 2; d <= 9; d++) {
        int count = N / d;
        printf("%d %d\n", d, count);
    }
    
    return 0;
}
