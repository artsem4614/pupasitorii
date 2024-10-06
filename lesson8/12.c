#include <stdio.h>

void print_sequence_helper(int n, int current_num, int times_printed){
    if(n == 0){
        return;
    }
    if(times_printed < current_num){
        printf("%d ", current_num);
        print_sequence_helper(n-1, current_num, times_printed+1);
    }
    else{
        print_sequence_helper(n, current_num+1, 0);
    }
}

void print_sequence(int n){
    print_sequence_helper(n, 1, 0);
}

int main(){
    int N;
    scanf("%d", &N);
    print_sequence(N);
    printf("\n");
    return 0;
}
