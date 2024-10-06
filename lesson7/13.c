#include <stdio.h>

#define PI 3.14159265358979323846

float factorial(int n) {
    float result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

float cosinus(float x) {
    float radians = x * (PI / 180);
    float sum = 0.0;
    float term;
    int n = 0;

    do {
        term = (n % 2 == 0 ? 1 : -1) * (pow(radians, 2 * n) / factorial(2 * n));
        sum += term;
        n++;
    } while (fabs(term) >= 0.001); 
    return sum;
}

int main() {
    float x;
    scanf("%f", &x);
    
    if (x < 0 || x > 90) {
        printf("Ошибка: введите целое число от 0 до 90.\n");
        return 1;
    }
    
    printf("%.3f\n", cosinus(x));
    
    return 0;
}
