#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char *text;
    int *count, size = 0;

    count = (int*)calloc(3, sizeof(int));
    text = (char*)malloc(101 * sizeof(char));
    scanf("%[^\n]", text);
    while (*(text + size) != '\0'){
        if (islower(*(text + size))){
            (*count)++;
        } else if (isupper(*(text + size))){
            (*(count + 1))++;
        } else if (isalnum(*(text + size))){
            (*(count + 2))++;
        }
        size++;
    }
    printf("Lowercase letters: %d\n", *count);
    printf("Uppercase letters: %d\n", *(count + 1));
    printf("Digits: %d", *(count + 2));

    free(text);
    free(count);

    return 0;
}
