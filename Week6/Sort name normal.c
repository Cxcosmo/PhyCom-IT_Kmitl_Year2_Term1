#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char name_list[20][61] = {0}, name[61], name_copy[61];

    for (int i = 0; i < 20; i++){
        scanf(" %[^\n]", &name);

        int j = 0;
        while (name[j] != '\0'){
            name[j] = !isalpha(name[j - 1]) ? toupper(name[j]) : tolower(name[j]);
            j++;
        }

        int pos = i;
        while (pos > 0 && strcmp(name_list[pos - 1], name) > 0) {
            strcpy(name_list[pos], name_list[pos - 1]);
            pos--;
        }
        strcpy(name_list[pos], name);
    }

    for (int i = 0; i < 20; i++){
        printf("%s\n", name_list[i]);
    }

    return 0;
}
