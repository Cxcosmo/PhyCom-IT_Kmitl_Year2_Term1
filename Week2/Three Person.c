#include <stdio.h>

int main() {
    char fname1[30], sname1[30], person2[30], person3[30];

    scanf("%s %s", fname1, sname1);
    scanf(" %[^\n]", &person2);
    scanf(" %[^\n]", &person3);

    printf("Person 1: %s %s\n", fname1, sname1);
    printf("Person 2: %s\n", person2);
    printf("Person 3: %s", person3);

    return 0;
}
