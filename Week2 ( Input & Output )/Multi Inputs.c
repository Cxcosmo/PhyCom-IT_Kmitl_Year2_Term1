#include <stdio.h>

int main() {
    char string[30];

    scanf("%s", &string);
    printf("String 1: %-.3s\n", string);
    scanf("%s", &string);
    printf("String 2: %-.4s\n", string);
    scanf("%s", &string);
    printf("String 3: %-.5s\n", string);
    scanf("%s", &string);
    printf("String 4: %-.6s\n", string);

    return 0;
}
