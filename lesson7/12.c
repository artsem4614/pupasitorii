#include <stdio.h>
#include <string.h>

void toUpperCase(char *str) {
    while (*str) {
        if (*str >= 'a' && *str <= 'z') {
            *str -= 32;
        }
        str++;
    }
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    
    int len = strlen(str);
    if (len > 0 && str[len - 2] == '.') { 
        str[len - 2] = '\0'; 
    }

    toUpperCase(str);
    printf("%s\n", str);
    
    return 0;
}
