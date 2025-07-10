#include <stdio.h>

int main() {
    char inputChar;

    for (int i = 0; i < 5; i++) {
        scanf(" %c", &inputChar);
        if (i == 0 || i == 2 || i == 4) {
            printf("%c\n", inputChar + 1);
        } else {
            printf("%c\n", inputChar);
        }
    }

    return 0;
}
