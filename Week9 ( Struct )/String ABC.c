#include <stdio.h>
#include <string.h>

int main(){
    char text[201], text_sort[201];
    int i = 0;

    scanf(" %[^\n]", text);
    while (text[i] != '\0'){
        int j = i;
        while (j > 0 && text_sort[j - 1] > text[i]){
            text_sort[j--] = text_sort[j - 1];
        }
        text_sort[j] = text[i++];
    }
    printf("%s", text_sort);

    return 0;
}
