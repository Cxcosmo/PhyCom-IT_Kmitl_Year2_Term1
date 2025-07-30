#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);
    while (n != 0){
        n > 0 ? printf("%d ", n--) : printf("%d ", n++);
    }
    printf("0");

    return 0;
}
