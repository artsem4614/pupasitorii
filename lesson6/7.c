#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 0) return 1;

    int a = 1, b = 1;
    if (n >= 1) printf("%d", a);
    if (n >= 2) printf(" %d", b);

    for (int i = 3; i <= n; i++) {
        int next = a + b;
        printf(" %d", next);
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}
