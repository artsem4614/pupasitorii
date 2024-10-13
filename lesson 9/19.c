#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 10001

int is_valid_number(char str[]) {
    int len = strlen(str);
    if(len == 0) return 0;
    for(int i = 0; i < len; i++) {
        if(!isdigit(str[i])) return 0;
    }
    return 1;
}

int main() {
    char N_str[MAX_LENGTH];
    
    if(scanf("%10000s", N_str) != 1) {
        printf("Ошибка ввода.\n");
        return 1;
    }
    
    if(!is_valid_number(N_str)) {
        printf("Введено некорректное натуральное число.\n");
        return 1;
    }
    
    int len = strlen(N_str);
    
    for(int i = 0; i < len; i++) {
        printf("%c", N_str[i]);
        if(i < len - 1) {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}
