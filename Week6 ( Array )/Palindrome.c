#include <stdio.h>

int main(){
    char text[101];
    int size = 0;

    scanf(" %[^\n]", &text);
    while (text[size] != '\0'){ size++; }
    for (int i = 0; i < size; i++){
        if (size - i <= i){ break; }
        if (text[i] != text[size - i - 1]){
            printf("It is not Palindrome.");
            return 0;
        }
    }
    printf("It is Palindrome.");

    return 0;
}
