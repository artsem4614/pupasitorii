#include <stdio.h>

 int main() {
    int a,b,c,d,e;
    scanf("%d%d%d%d%d", &a, &b,&c,&d,&e);
    b=(a/100);
    c=((a / 10)%10);
    a=(a%10);

    if (a > b && a > c) {
      printf("%d",a);
    } else if(b > a&& b>c){
      printf("%d",b);
    }else {
        printf("%d\n",c);
    }
    return 0;
 }
