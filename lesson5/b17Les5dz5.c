#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 10; i <= n; i++) {
        int sum = 0, product = 1;
        int temp = i;
        while (temp > 0) {
            int digit = temp % 10;
            sum += digit;
            product *= digit;
            temp /= 10;
        }
        if (sum == product) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
