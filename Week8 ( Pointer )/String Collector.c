#include <stdio.h>
#include <stdlib.h>

int main(){
    char *text, chr;
    int size = 1;

    text = (char*) malloc(sizeof(char));
    while (1){
        scanf(" %c", &chr);
        if (chr == '-'){ break; }

        char *temp = (char*) realloc(text, size * sizeof(char));
        text = temp;
        *(text + size++ - 1) = chr;
    }
    char *ptr = text;
    size--;
    while (ptr < text + size){
        printf("%c", *ptr++);
    }
    ptr--;
    printf("\n");
    while (ptr >= text){
        printf("%c", *ptr--);
    }

    free(text);

    return 0;
}
