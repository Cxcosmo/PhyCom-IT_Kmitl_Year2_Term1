#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char text[2001], *find_cat;
    int i = 0, first = 1;

    scanf(" %[^\n]", text);
    while (text[i] != '\0'){
        text[i++] = tolower(text[i]);
    }

    find_cat = text;
    while (find_cat = strstr(find_cat, "cat")){
        if (!first){
            printf(", ");
        }
        printf("%d", (find_cat++ - text) + 1);
        first = 0;
    }

    return 0;
}
