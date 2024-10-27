#include <stdio.h>
#include <string.h>

int main() {
    FILE *inputFile = fopen("input.txt", "r");
    if(inputFile == NULL) return 1;
    char buffer[1001];
    fgets(buffer, sizeof(buffer), inputFile);
    fclose(inputFile);
    size_t len = strlen(buffer);
    for(size_t i = 0; i < len; i++) {
        if(buffer[i] == 'a') buffer[i] = 'b';
        else if(buffer[i] == 'b') buffer[i] = 'a';
        else if(buffer[i] == 'A') buffer[i] = 'B';
        else if(buffer[i] == 'B') buffer[i] = 'A';
    }
    FILE *outputFile = fopen("output.txt", "w");
    if(outputFile == NULL) return 1;
    fputs(buffer, outputFile);
    fclose(outputFile);
    return 0;
}
