#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_palindrom(const char *str) {
    int counts[26] = {0};
    for(int i = 0; str[i]; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            counts[str[i] - 'a']++;
        }
    }
    int odd = 0;
    for(int i = 0; i < 26; i++) {
        if(counts[i] % 2 != 0) {
            odd++;
            if(odd > 1) return 0;
        }
    }
    return 1;
}

int main(){
    FILE *in = fopen("input.txt", "r");
    char line[1001];
    if(in){
        if(fgets(line, sizeof(line), in)){
            size_t len = strlen(line);
            if(len > 0 && line[len-1] == '\n') line[len-1] = '\0';
            if(is_palindrom(line)) printf("YES\n");
            else printf("NO\n");
        }
        fclose(in);
    }
    return 0;
}
