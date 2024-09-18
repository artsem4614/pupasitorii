#include <stdio.h>

int main() {
    int a, reverse = 0;
    scanf("%d", &a);
    while(a>0){
        int num = a%10;
        reverse = reverse * 10 + num;
        a /= 10;
    }
    printf("%d\n", reverse);
    return 0;
}