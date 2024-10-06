#include<stdio.h>

int s(int n){
    int sum;
    for (int i =1; i<=n;i++) {
        sum+=i;
    }
    return sum;
}

int main() {
    int x;
    scanf("%d", &x);
    printf("%d", s(x));
}