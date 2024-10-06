#include<stdio.h>

int maxF(int x){
    int fx;
    if ((-2 <= x) && (x < 2)) {
        fx=x*x;
    }else if( x>=2) {
        fx = (x*x) +(4*x) +5;
    }else if(x<-2){
        fx = 4;
    }
    return fx;
}

int main(){
    int x, max = 0;
    scanf("%d", &x);

    while (1) {
        if (maxF(x) >max) max=maxF(x);
        if (x == 0) break;
        scanf("%d", &x);
    }
    printf("%d",max);
}