#include <stdio.h>

int main(){
    char text;

    scanf("%c", &text);
    if (text <= 90 && text >= 65){
        printf("%c", text + 32);
    } else if(text >= 97 && text <= 122){
        printf("%c", text - 32);
    } else {
        printf("error");
    }

    return 0;
}
