#include <stdio.h>
#include <string.h>

int main(){
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    if(in && out){
        char word[21];
        if(fscanf(in, "%20s", word) == 1){
            // Инициализация сопоставления букв с цифрами
            char mapping[26];
            for(int i = 0; i < 26; i++) mapping[i] = '0'; // Инициализируем '0' для гласных и других
            mapping['b'-'a'] = '1';
            mapping['f'-'a'] = '1';
            mapping['p'-'a'] = '1';
            mapping['v'-'a'] = '1';
            mapping['c'-'a'] = '2';
            mapping['g'-'a'] = '2';
            mapping['j'-'a'] = '2';
            mapping['k'-'a'] = '2';
            mapping['q'-'a'] = '2';
            mapping['s'-'a'] = '2';
            mapping['x'-'a'] = '2';
            mapping['z'-'a'] = '2';
            mapping['d'-'a'] = '3';
            mapping['t'-'a'] = '3';
            mapping['l'-'a'] = '4';
            mapping['m'-'a'] = '5';
            mapping['n'-'a'] = '5';
            mapping['r'-'a'] = '6';
            
            char code[5] = {0};
            code[0] = word[0];
            char prev = '0'; // Инициализируем '0', чтобы первый кодируемый символ всегда добавлялся, если применим
            int idx = 1;
            
            for(int i =1; word[i] && idx <4; i++){
                if(word[i] < 'a' || word[i] > 'z') continue; // Пропускаем нестрочные буквы
                char current = mapping[word[i]-'a'];
                if(current == '0') continue; // Пропускаем гласные и другие символы без кода
                if(current != prev){
                    code[idx++] = current;
                    prev = current;
                }
            }
            while(idx <4) code[idx++] = '0';
            code[4] = '\0';
            fprintf(out, "%s", code);
        }
        fclose(in);
        fclose(out);
    }
    return 0;
}
