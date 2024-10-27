#include <stdio.h>
#include <string.h>

int main(){
    FILE *inputFile = fopen("input.txt", "r");
    char buffer[1001];
    fgets(buffer, sizeof(buffer), inputFile);
    fclose(inputFile);
    char *token = strtok(buffer, " ");
    char longest[1001] = "";
    int max_length = 0;
    while(token != NULL){
        int len = strlen(token);
        if(len > max_length){
            max_length = len;
            strcpy(longest, token);
        }
        token = strtok(NULL, " ");
    }
    FILE *outputFile = fopen("output.txt", "w");
    fprintf(outputFile, "%s", longest);
    fclose(outputFile);
    return 0;
}
