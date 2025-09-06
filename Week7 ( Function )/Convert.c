#include <stdio.h>
#include <ctype.h>

char convert(char x);
int checkSame(char text1[102], char text2[102]);

int main(){
    char text1[102], text2[102];
    int i = 0, j = 0;

    scanf("%[^\n] %[^\n]", &text1, &text2);

    printf("*** Results ***\n");
    while (text1[i] != '\0'){ printf("%c", convert(text1[i])); i++; }
    printf("\n");
    while (text2[j] != '\0'){ printf("%c", convert(text2[j])); j++; }
    printf("\n");
    printf("***************\n");
    checkSame(text1, text2);

    return 0;
}

char convert(char x){
    x = isupper(x) ? tolower(x) : toupper(x);

    return x;
}

int checkSame(char text1[102], char text2[102]){
    int i = 0;

    while (text1[i] != '\0' || text2[i] != '\0'){
        if (toupper(text1[i]) != toupper(text2[i])){
            printf("Both strings are not the same.");
            return 0;
        }
        i++;
    }
    printf("Both strings are the same.");

    return 0;
}
