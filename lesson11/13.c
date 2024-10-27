#include <stdio.h>
#include <string.h>

int main() {
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    char line[1005];
    if (in && out) {
        if (fgets(line, sizeof(line), in)) {
            size_t len = strlen(line);
            if (len > 0 && line[len-1] == '\n') {
                line[len-1] = '\0';
            }
            char *last_slash = strrchr(line, '/');
            char *filename = last_slash ? last_slash + 1 : line;
            char *last_dot = strrchr(filename, '.');
            if (last_dot) {
                *last_dot = '\0';
            }
            strcat(line, ".html");
            fprintf(out, "%s", line);
        }
        fclose(in);
        fclose(out);
    }
    return 0;
}
