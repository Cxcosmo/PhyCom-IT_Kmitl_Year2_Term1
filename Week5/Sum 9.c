#include <stdio.h>

int main(){
    int num, n_in;

    do {
        scanf("%d", &n_in);
        n_in != -9 ? num += n_in : 0;
    }while (n_in != -9);

    printf("%d", num);

    return 0;
}
