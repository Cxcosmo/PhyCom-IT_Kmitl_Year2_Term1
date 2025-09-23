#include <stdio.h>
#include <ctype.h>

int main(){
    char name[201];
    int index = 0;

    scanf(" %[^\n]", name);
    while (name[index] != '\0'){
        if (index == 0 || isspace(name[index - 1])){
            printf("%c.", name[index]);
        }
        index++;
    }

    return 0;
}
