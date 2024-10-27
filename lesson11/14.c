#include <stdio.h>

int main(){
    FILE *inputFile = fopen("input.txt", "r");
    char surname[101], name[101], patronymic[101];
    fscanf(inputFile, "%s %s %s", surname, name, patronymic);
    fclose(inputFile);
    FILE *outputFile = fopen("output.txt", "w");
    fprintf(outputFile, "Hello, %s %s!", name, surname);
    fclose(outputFile);
    return 0;
}
