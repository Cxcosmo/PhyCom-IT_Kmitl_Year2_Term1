#include <stdio.h>

int main(){
    char text[101];
    int i = 0;

    scanf("%[^\n]", &text);
    while (text[i] != '\0'){ i++; }
    for (int j = i - 1; j >= 0 ; j--){
        printf("%c", text[j]);
    }

    return 0;
}
