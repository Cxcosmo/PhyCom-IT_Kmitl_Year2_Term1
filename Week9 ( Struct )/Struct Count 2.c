#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct countWord {
    int chr;
    int word;
    int line;
} countWord;

int main(){
    struct countWord cw = {0, 0, 0};
    char text[451];

    while (1){
        scanf(" %[^\n]", text);
        if (!strcmp(text, ".")){ break; }
        cw.line++;
        int i = 0, t = 0;
        while (text[i] != '\0'){
            if (isspace(text[i++])){
                cw.word++;
                cw.chr += t;
                t = 0;
            } else { t++; }
        }
        if (t){
            cw.word++;
            cw.chr += t;
            t = 0;
        }
    }

    printf("Char = %d, word = %d, line = %d", cw.chr, cw.word, cw.line);

    return 0;
}
