#include<stdio.h>

int exponent ( int x, int y){
    int z = x;
    if (y>1){ 
    
        while (y > 1) {
            z=z *x;
            y--;
    }
    }else if (y ==0) {
        z =1;
    }
    return z;
}

int main () {
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d",exponent(x, y));
}