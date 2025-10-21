#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf(" %d", &n);

    int* list = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++){
        scanf(" %d", &*(list + i));
    }

    int first = 0, last = n - 1, check = 0;
    for (int j = 0; j < n; j++){
        if (!j || !check){
            printf("%d", *(list + last--));
        } else {
            printf("%d", *(list + first++));
        }
        if (n > 1 && j != n - 1){
            printf(" -> ");
        }
        if (!(j % 2)){
            check = !check;
        }
    }

    free(list);

    return 0;
}
