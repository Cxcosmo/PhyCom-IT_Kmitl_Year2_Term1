#include <stdio.h>
#include <ctype.h>

int main(){
    char a;

    scanf("%s", &a);
    if (isupper(a)){
        printf("uppercase");
    } else if (islower(a)){
        printf("lowercase");
    } else if (isalnum(a)){
        printf("number");
    } else {
        printf("error");
    }

    return 0;
}
