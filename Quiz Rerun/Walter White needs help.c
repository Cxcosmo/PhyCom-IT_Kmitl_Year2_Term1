#include <stdio.h>

int main(){
    int x, y, count = 0;

    scanf("%d %d", &x, &y);
    printf("pass :");
    if (x < y){
        for (int i = x; i <= y; i++){
            !(i % 2) ? printf(" %d", i), count += i : 0;
        }
    } else {
        for (int i = x; i >= y; i--){
            !(i % 2) ? printf(" %d", i), count += i : 0;
        }
    }
    printf("\n");
    printf("Sum : %d", count);

    return 0;
}
