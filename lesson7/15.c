#include <stdio.h>

int grow_up(int n) {
    int last_digit = 10;
    while (n > 0) {
        int current_digit = n % 10;
        if (current_digit >= last_digit) {
            return 0;
        }
        last_digit = current_digit;
        n /= 10;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    
    if (grow_up(n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}
