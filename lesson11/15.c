#include <stdio.h>
#include <string.h>

int main(){
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    char line[1001];
    char result[5000];
    if(in && out){
        if(fgets(line, sizeof(line), in)){
            int i=0, j=0;
            while(line[i]){
                if(line[i] == 'C' && line[i+1] == 'a' && line[i+2] == 'o'){
                    strcpy(&result[j], "Ling");
                    j += 4;
                    i +=3;
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
