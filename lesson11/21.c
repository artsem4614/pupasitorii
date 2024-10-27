#include <stdio.h>

int main(){
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    if(in && out){
        char c;
        int count =0;
        while((c = fgetc(in)) != EOF){
            if(c == '*') count++;
        }
        int h=0;
        while((h*(h+1))/2 < count) h++;
        if((h*(h+1))/2 != count || h==0){
            fputs("NO", out);
        }
        else{
            for(int i=1;i<=h;i++){
                for(int s=0;s<h-i;s++) fputc(' ', out);
                for(int j=1; j<=i; j++){
                    fputc('*', out);
                    if(j !=i) fputc(' ', out);
                }
                fputc('\n', out);
            }
        }
        fclose(in);
        fclose(out);
    }
    return 0;
}
