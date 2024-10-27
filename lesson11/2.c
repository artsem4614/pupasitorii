#include <stdio.h>
#include <string.h>

int main() {

    FILE *inputFile = fopen("input.txt", "r");
    char buffer[101];
    int N;

   
    fscanf(inputFile, "%d", &N);
    fclose(inputFile);

    char result[101]; 
    int letter = 'A'; 
    int digit = 2;     
    int digitCycle = 0; 

    for(int i = 0; i < N; i++) {
        if(i % 2 == 0) { 
            result[i] = letter;
            letter++;
            if(letter > 'Z') {
                letter = 'A';
            }
        } else { 
            result[i] = '0' + digit;
            digitCycle++;
            if(digitCycle == 4) {
                digit = 2;
                digitCycle = 0;
            } else {
                digit += 2;
            }
        }
    }


    result[N] = '\0';


    FILE *outputFile = fopen("output.txt", "w");
    fprintf(outputFile, "%s", result);
    fclose(outputFile);

    return 0;
}
