#include <stdio.h>
#include <string.h>

int main() {
    FILE *inputFile = fopen("input.txt", "r");
    char buffer[1001];


    fgets(buffer, sizeof(buffer), inputFile);
    fclose(inputFile);

    buffer[strcspn(buffer, "\r\n")] = '\0';


    int length = strlen(buffer);

    if(length == 0){
       
        FILE *outputFile = fopen("output.txt", "w");
        fclose(outputFile);
        return 0;
    }

  
    char lastChar = buffer[length - 1];


    FILE *outputFile = fopen("output.txt", "w");

  
    int firstMatch = 1;

    for(int i = 0; i < length - 1; i++) {
        if(buffer[i] == lastChar){
            if(!firstMatch){
                fprintf(outputFile, " ");
            }
            fprintf(outputFile, "%d", i);
            firstMatch = 0;
        }
    }

    fclose(outputFile);

    return 0;
}
