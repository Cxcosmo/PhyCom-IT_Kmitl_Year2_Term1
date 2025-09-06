#include <stdio.h>
#include <stdlib.h>

int main(){
    char *text = (char*)malloc(101 * sizeof(char));
    int size = 0;

    scanf("%[^\n]", text);
    while (*(text + size) != '\0'){ size++; }
    size--;
    while (size >= 0){
        printf("%c", *(text + size--));
    }

    free(text);

    return 0;
}
