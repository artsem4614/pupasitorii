#include <stdio.h>
#include <string.h>

int main(){
    FILE *inputFile = fopen("input.txt", "r");
    char buffer[1001];
    fgets(buffer, sizeof(buffer), inputFile);
    fclose(inputFile);
    
    buffer[strcspn(buffer, "\r\n")] = '\0';
    
    int indices[1000];
    int count = 0;
    for(int i=0; buffer[i]!='\0'; i++) if(buffer[i] != ' ') indices[count++] = i;
    
    for(int i=0; i+1 < count; i+=2){
        char temp = buffer[indices[i]];
        buffer[indices[i]] = buffer[indices[i+1]];
        buffer[indices[i+1]] = temp;
    }
    
    FILE *outputFile = fopen("output.txt", "w");
    fputs(buffer, outputFile);
    fclose(outputFile);
    return 0;
}
