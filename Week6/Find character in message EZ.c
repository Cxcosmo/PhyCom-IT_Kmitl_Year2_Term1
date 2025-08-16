#include <stdio.h>
#include <ctype.h>

int main(){
    char text[301], chr;
    int i = 0, j = 0, count = 0, position[301];

    scanf("%[^\n] %c", &text, &chr);
    while (text[i] != '\0'){
        if (toupper(text[i]) == toupper(chr)){
            count += 1;
            position[j] = i + 1;
            j++;
        }
        i++;
    }
    if (count == 0){
        printf("Not found.");
    } else {
        printf("There is/are %d \"%c\" in the above sentences.\n", count, chr);
        printf("Position: %d", position[0]);
        for (int i = 1; i < j; i++){
            printf(", %d", position[i]);
        }
    }

    return 0;
}
