#include <stdio.h>
#include <string.h>

int main(){
    int size;
    scanf("%d", &size);
    char box[51];

    for (int i = 0; i < 4; i++){
        if (i == 0 || i == 3){
            for (int j = 0; j < size; j++){
                printf("*");
            }
        } else {
            scanf(" %[^\n]", box);
            int text_size = strlen(box), space = size - 2 - text_size;
            printf("*");
            if (space < 0){
                text_size = size - 2;
                space = 0;
            } else {
                space = (space / 2) + (space % 2);
            }
            int index = 0;
            for (int j = 0; j < size - 2; j++){
                j < space || j >= text_size + space ? printf(" ") : printf("%c", box[index++]);
            }
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
