#include <stdio.h>
#include <math.h>

int main(){
    long x, y;

    scanf("%ld %ld", &x, &y);
    printf("sqrt(%ld^2+%ld^2)=%.2f", x, y, sqrt(pow(x, 2) + pow(y, 2)));

    return 0;
}
