#include <stdio.h>

void print_numbers(int A, int B) {
    if (A < B) {
        printf("%d ", A);
        print_numbers(A + 1, B);
    }
    else if (A > B) {
        printf("%d ", A);
        print_numbers(A - 1, B);
    }
    else {
        printf("%d ", A);
    }
}

int main(){
    int A, B;
    scanf("%d %d", &A, &B);
    print_numbers(A, B);
    printf("\n");
    return 0;
}
