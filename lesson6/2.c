#include <stdio.h>
#include <stdbool.h>

int main() {
    int num, x, y = 0, z;
    scanf("%d", &num);
    if (num == 0) {
        printf("YES");
    }

    while (num > 0) {
        x = num % 10;
        z = (num %100) /10; 
        num /= 10;    
        if (x<=z) {
            printf("NO");
            y =0;
            break;
        }else{
            y++;
        }
    }
    if (y>0){
        printf("YES");
    }
    return 0;
}