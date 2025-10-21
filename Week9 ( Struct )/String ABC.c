#include <stdio.h>
#include <string.h>

int main(){
    char text[201];
    int i = 0;

    scanf(" %[^\n]", text);
    while (text[i] != '\0'){
        int j = i;
        char s = j, swap = text[i];
        while (text[j] != '\0'){
            if (text[j] < text[s]){
                s = j;
            }
            j++;
        }
        text[i] = text[s];
        text[s] = swap;
        i++;
    }
    printf("%s", text);

    return 0;
}
