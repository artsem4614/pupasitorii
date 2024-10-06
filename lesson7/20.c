#include <stdio.h>

int main() {
    char c;
    int balance = 0;

    while ((c = getchar()) != '.') {
        if (c == '(') {
            balance++;
        } else if (c == ')') {
            balance--;
        }

        if (balance < 0) {
            printf("NO\n");
            return 0;
        }
    }

    if (balance == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
