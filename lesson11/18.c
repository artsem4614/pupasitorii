#include <stdio.h>
#include <string.h>

void remove_extra_spaces(const char *input, char *output) {
    int i = 0, j = 0;
    while(input[i] == ' ') i++;
    while(input[i] != '\0') {
        if(input[i] != ' ') {
            output[j++] = input[i++];
        }
        else {
            output[j++] = ' ';
            while(input[i] == ' ') i++;
        }
    }
    if(j > 0 && output[j-1] == ' ') j--;
    output[j] = '\0';
}

int main(){
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    char line[1001];
    char result[1001];
    if(in && out){
        if(fgets(line, sizeof(line), in)){
            remove_extra_spaces(line, result);
            fputs(result, out);
        }
        fclose(in);
        fclose(out);
    }
    return 0;
}
