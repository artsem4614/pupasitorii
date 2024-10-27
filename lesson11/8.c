#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b){
    int x = *(const int *)a;
    int y = *(const int *)b;
    return x - y;
}

int main(){
    FILE *inputFile = fopen("input.txt", "r");
    char buffer[1001];
    fgets(buffer, sizeof(buffer), inputFile);
    fclose(inputFile);
    int numbers[1000];
    int count=0;
    int i=0;
    while(buffer[i]){
        if(buffer[i] >= '0' && buffer[i] <= '9'){
            int num=0;
            while(buffer[i] >= '0' && buffer[i] <= '9'){
                num = num *10 + (buffer[i]-'0');
                i++;
            }
            numbers[count++] = num;
        }
        else{
            i++;
        }
    }
    qsort(numbers, count, sizeof(int), cmp);
    FILE *outputFile = fopen("output.txt", "w");
    for(int j=0; j<count; j++){
        if(j>0) fprintf(outputFile, " ");
        fprintf(outputFile, "%d", numbers[j]);
    }
    fclose(outputFile);
    return 0;
}
