#include <stdio.h>

int main(){
    char text;

    scanf("%c", &text);
    text -= text >= 97 ? 32 : 0;
    if (text == 'S'){
        printf("Soft");
    } else if(text == 'M'){
        printf("Medium");
    } else if(text == 'H'){
        printf("Hard");
    } else if(text == 'I'){
        printf("Intermediate");
    } else if(text == 'W'){
        printf("Wet");
    }

    return 0;
}
