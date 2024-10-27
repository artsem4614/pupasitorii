#include <stdio.h>
#include <string.h>

int main(){
    FILE *inputFile = fopen("input.txt", "r");
    char buffer[1001];
    fgets(buffer, sizeof(buffer), inputFile);
    fclose(inputFile);
    char output[1001];
    int seen[256] = {0};
    int j = 0;
    for(int i = 0; buffer[i] != '\0'; i++){
        char c = buffer[i];
        if(c == ' ') continue;
        if(!seen[(unsigned char)c]){
            output[j++] = c;
            seen[(unsigned char)c] = 1;
        }
    }
    output[j] = '\0';
    FILE *outputFile = fopen("output.txt", "w");
    fputs(output, outputFile);
    fclose(outputFile);
    return 0;
}
