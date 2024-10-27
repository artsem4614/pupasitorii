#include <stdio.h>
#include <string.h>

int main() {
    FILE *inputFile = fopen("input.txt", "r");
    char word1[101], word2[101];
    fscanf(inputFile, "%s %s", word1, word2);
    fclose(inputFile);

    int freq1[26] = {0}, freq2[26] = {0};
    for(int i=0; word1[i]; i++) freq1[word1[i]-'a']++;
    for(int i=0; word2[i]; i++) freq2[word2[i]-'a']++;

    char common[26];
    int count=0;
    for(int i=0; i<26; i++) {
        if(freq1[i]==1 && freq2[i]==1) common[count++] = 'a' + i;
    }

    for(int i=0; i<count-1; i++) {
        for(int j=i+1; j<count; j++) {
            if(common[i] > common[j]) {
                char temp = common[i];
                common[i] = common[j];
                common[j] = temp;
            }
        }
    }

    FILE *outputFile = fopen("output.txt", "w");
    for(int i=0; i<count; i++) {
        if(i > 0) fprintf(outputFile, " ");
        fprintf(outputFile, "%c", common[i]);
    }
    fclose(outputFile);
    return 0;
}
