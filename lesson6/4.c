#include <stdio.h>

int main() {
    int num = 1;
    int i = 0;

    while (1) {
        scanf("%d", &num);
        if(num==0) {
            break;
        }else if(num%2!=0){
            continue;
        }else{
        i++;
        }
    }
    printf("%d\n", i);
    return 0;
}



