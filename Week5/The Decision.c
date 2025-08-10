#include <stdio.h>

int main(){
    int m, n;

    scanf("%d %d", &m, &n);

    while (m != n){
        m > n ? printf("%d ", m--) : printf("%d ", m++);
    }

    printf("%d", n);

    return 0;
}
