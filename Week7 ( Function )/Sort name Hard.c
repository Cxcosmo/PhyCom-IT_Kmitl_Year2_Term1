#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    int size;
    scanf(" %d", &size);
    char name_list[size][61], name[61];

    for (int i = 0; i < size; i++){
        scanf(" %[^\n]", &name);

        int j = 0;
        while (name[j] != '\0'){
            name[j] = !isalnum(name[j - 1]) ? toupper(name[j]) : tolower(name[j]);
            j++;
        }

        int p = i;
        while (p > 0 && strcmp(name_list[p - 1], name) > 0){
            strcpy(name_list[p], name_list[p - 1]);
            p--;
        }
        strcpy(name_list[p], name);
    }

    for (int i = 0; i < size; i++){
        printf("%s\n", name_list[i]);
    }

    return 0;
}
