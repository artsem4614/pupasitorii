#include<stdio.h>

int middle(int x, int y){
    int middle = (x+y)/2;
    return middle;
}

int main() {
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d", middle(x, y));

}