#include <stdio.h>
#include <ctype.h>

int main() {
    char text[151];
    int index = 0;

    scanf("%[^\n]", text);
    while (text[index] != '\0'){
        !isspace(text[index]) ? printf("%c", text[index++]) : index++;
    }

    return 0;
}
