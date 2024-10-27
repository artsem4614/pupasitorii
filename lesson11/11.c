#include <stdio.h>
#include <string.h>

int main(){
    FILE *inputFile = fopen("input.txt", "r");
    char buffer[1001];
    fgets(buffer, sizeof(buffer), inputFile);
    fclose(inputFile);
    
    buffer[strcspn(buffer, "\r\n")] = '\0';
    
    int count = 0;
    char *token = strtok(buffer, " ");
    while(token != NULL){
        size_t len = strlen(token);
        if(len > 0 && (token[len-1] == 'a' || token[len-1] == 'A')){
            count++;
        }
        token = strtok(NULL, " ");
    }
    
    FILE *outputFile = fopen("output.txt", "w");
    fprintf(outputFile, "%d", count);
    fclose(outputFile);
    return 0;
}
