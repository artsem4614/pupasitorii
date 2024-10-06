#include<stdio.h>
#include<stdint.h>

int module(int x){
    if (x<0){
        printf("%d", x*(-1));
    }else {
        printf("%d", x);
    }
}

int main(){
    int x;
    scanf("%d", &x);
    module(x);

}