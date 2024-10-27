#include <stdio.h>
#include <string.h>

int is_palindrom(char str[]) {
    int len = strlen(str);
    for(int i=0; i<len/2; i++) {
        if(str[i] != str[len-1-i]) return 0;
    }
    return 1;
}

int main(){
    FILE *inputFile = fopen("input.txt", "r");
    char str[1001];
    fscanf(inputFile, "%s", str);
    fclose(inputFile);
    int result = is_palindrom(str);
    FILE *outputFile = fopen("output.txt", "w");
    if(result) fprintf(outputFile, "YES");
    else fprintf(outputFile, "NO");
    fclose(outputFile);
    return 0;
}
