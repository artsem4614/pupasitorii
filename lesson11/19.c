#include <stdio.h>
#include <string.h>

int main(){
    FILE *inputFile = fopen("input.txt", "r");
    char buffer[1001];
    fgets(buffer, sizeof(buffer), inputFile);
    fclose(inputFile);
    
    buffer[strcspn(buffer, "\r\n")] = '\0';
    
    int freq[26] = {0};
    for(int i=0; buffer[i]!='\0'; i++) freq[buffer[i]-'a']++;
    
    char left[1001] = "";
    char middle = '\0';
    for(int i=0; i<26; i++){
        int pairs = freq[i]/2;
        for(int j=0; j<pairs; j++) {
            strncat(left, (char[]){'a' + i, '\0'}, 1);
        }
        if(freq[i]%2 == 1 && middle == '\0') middle = 'a' + i;
    }
    
    char right[1001];
    strcpy(right, left);
    int len = strlen(right);
    for(int i=0; i<len/2; i++){
        char temp = right[i];
        right[i] = right[len-1-i];
        right[len-1-i] = temp;
    }
    
    char result[2002] = "";
    strcat(result, left);
    if(middle != '\0') {
        strncat(result, (char[]){middle, '\0'}, 1);
    }
    strcat(result, right);
    
    FILE *outputFile = fopen("output.txt", "w");
    fprintf(outputFile, "%s", result);
    fclose(outputFile);
    return 0;
}
