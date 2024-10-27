#include <stdio.h>
#include <string.h>

int main() {
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    char line[1001];
    if (in && out) {
        if (fgets(line, sizeof(line), in)) {
            char *word = strtok(line, " ");
            while (word) {
                fprintf(out, "%s\n", word);
                word = strtok(NULL, " ");
            }
        }
        fclose(in);
        fclose(out);
    }
    return 0;
}
