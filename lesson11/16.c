#include <stdio.h>
#include <string.h>

int main(){
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    char line[1001];
    char result[1001];
    if(in && out){
        if(fgets(line, sizeof(line), in)){
            int i=0, j=0;
            while(line[i]){
                if(line[i] == 'L' && line[i+1] == 'i' && line[i+2] == 'n' && line[i+3] == 'g'){
                    strcpy(&result[j], "Cao");
                    j += 3;
                    i +=4;
                }
                else{
                    result[j++] = line[i++];
                }
            }
            result[j] = '\0';
            fputs(result, out);
        }
        fclose(in);
        fclose(out);
    }
    return 0;
}

