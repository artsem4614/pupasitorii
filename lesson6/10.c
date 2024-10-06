#include <stdio.h>

int main() {
    char ch;
    
    while (1) {
        int result = scanf("%c", &ch);
        if (result == EOF) break;
        
        if (ch == '.') {
            break;
        }
        if (ch >= 'A' && ch <= 'Z') {
            ch += 'a' - 'A';
        }
        printf("%c", ch);
    }
    
    return 0;
}

