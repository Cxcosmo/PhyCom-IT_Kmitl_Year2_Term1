#include <stdio.h>
#include <stdlib.h>

int main(){
    long n, m, index = 0;
    scanf("%ld %ld", &n, &m);
    char *text = (char*)malloc(n * sizeof(char));

    scanf(" %[^\n]", text);
    while (index < n && *(text + index) != '\0'){
        printf("%c", *(text + index));
        index += m;
    }

    free(text);

    return 0;
}
