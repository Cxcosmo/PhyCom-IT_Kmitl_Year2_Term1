#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Book {
    char id[10];
    char name[100];
    char author[100];
} Book;

int main(){
    int n;
    scanf(" %d", &n);

    struct Book book[n];
    char id[10];
    int state = 1;

    scanf(" %s", id);
    for (int i = 0; i < n; i++){
        scanf("%s %s %s", book[i].id, book[i].name, book[i].author);
        if (!strcmp(book[i].id, id)){
            printf("%s %s %s", book[i].id, book[i].name, book[i].author);
            state--;
        }
    }
    if (state){
        printf("Not Found");
    }

    return 0;
}
