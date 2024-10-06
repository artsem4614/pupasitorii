#include<stdio.h>

int func( int x){
    if (x == 0) {
        return 0;
    }else {
        printf("%d ", x%10);
        return func(x /10);
    }
}

int main(){
    int x;
    scanf("%d", &x);
    if (x!=0){
    func(x);
    }else{
        printf("%d", 0);
    }
}