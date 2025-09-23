#include <stdio.h>
#include <string.h>

int main(){
    char text[101], char_tmp;
    int check = 0, out_check = 0;

    scanf(" %[^\n]", text);
    while (1){
        int i = 0;
        while (text[i] != '\0'){
            if (check){
                int j = i;
                while (text[j] != '\0'){
                    text[j - 2] = text[j];
                    j++;
                }
                text[j - 2] = text[j];
                check = 0;
                i -= 2;
            } else if (i && char_tmp == text[i]){
                check++;
                out_check++;
            }
            char_tmp = text[i++];
        }
        if (check){
            text[i - 2] = text[i];
            check = 0;
        }
        if (!out_check){
            break;
        }
        printf("%s\n", text);
        out_check = 0;
    }

    return 0;
}
