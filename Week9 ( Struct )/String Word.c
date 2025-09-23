#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char text_in[151], **word_list;
    int capacity = 10, using = 0;

    scanf(" %[^\n]", text_in);
    word_list = (char**) malloc(capacity * sizeof(char*));

    char word[151];
    int i = 0, word_index = 0;

    while (text_in[i] != '\0'){
        if (using == capacity){
            capacity += 10;
            char **tmp_word = (char**) realloc(word_list, capacity * sizeof(char*));
            word_list = tmp_word;
        }
        if (isspace(text_in[i])){
            word_list[using] = (char*) malloc((strlen(word) + 1) * sizeof(char));
            strcpy(word_list[using++], word);
            word_index = 0;
            int j = 0;
            while (word[j] != '\0'){
                word[j++] = '\0';
            }
        } else {
            word[word_index++] = text_in[i];
            word[word_index] = '\0';
        }
        i++;
    }
    if (strlen(word)){
        word_list[using] = (char*) malloc((strlen(word) + 1) * sizeof(char));
        strcpy(word_list[using++], word);
    }
    printf("%d words\n", using);
    printf("----\n");
    for (int i = 0; i < using; i++){
        int j = 0;
        while (word_list[i][j] != '\0'){
            printf("%c", tolower(word_list[i][j++]));
        }
        printf(" : %d\n", strlen(word_list[i]));
    }

    return 0;
}
