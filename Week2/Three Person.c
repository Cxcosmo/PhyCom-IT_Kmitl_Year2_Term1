#include <stdio.h>

int main() {
    char fname1[30], sname1[30], fname2[30], sname2[30], fname3[30], sname3[30];

    scanf("%s %s", fname1, sname1);
    scanf("%s %s", fname2, sname2);
    scanf("%s %s", fname3, sname3);

    printf("Person 1: %s %s\n", fname1, sname1);
    printf("Person 2: %s %s\n", fname2, sname2);
    printf("Person 3: %s %s\n", fname3, sname3);

    return 0;
}
