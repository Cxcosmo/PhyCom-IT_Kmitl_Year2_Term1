#include <stdio.h>
#include <ctype.h>

int main(){
    char chr, text[151];
    int count = 0, i = 0;

    scanf(" %c", &chr);
    scanf(" %[^\n]", text);
    while (text[i] != '\0'){
        if (tolower(chr) == tolower(text[i++])){
            count++;
        }
    }
    printf("%d", count);

    return 0;
}
