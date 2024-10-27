#include <stdio.h>
#include <ctype.h>

int main(){
    FILE *inputFile = fopen("input.txt", "r");
    char buffer[10001];
    size_t n = fread(buffer, 1, 10000, inputFile);
    buffer[n] = '\0';
    fclose(inputFile);
    int lower = 0, upper = 0;
    for(int i = 0; buffer[i] != '\0'; i++){
        if(islower(buffer[i])) lower++;
        else if(isupper(buffer[i])) upper++;
    }
    FILE *outputFile = fopen("output.txt", "w");
    fprintf(outputFile, "%d %d", lower, upper);
    fclose(outputFile);
    return 0;
}
