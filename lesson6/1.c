#include <stdio.h>
#include <stdbool.h>

int main() {
    int num, x, y = 0;
    scanf("%d", &num);

    while (num > 0) {
        x = num % 10;  
        num /= 10;    
        if (x == 9) {
            y++;
        }
    }
    if (y == 1){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}