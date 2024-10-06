#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    
    if (num1 < 0 || num2 < 0) {
        return 1;
    }

    printf("%d\n", gcd(num1, num2));
    return 0;
}
