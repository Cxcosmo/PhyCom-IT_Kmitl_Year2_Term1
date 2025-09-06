#include <stdio.h>

int main(){
    float a, b, c;

    scanf("%f %f %f", &a, &b, &c);
    if ((a > b && b > c) || (a < b && b < c)){
        printf("%.2f", b);
    } else if ((a > c && c > b) || (a < c && c < b)){
        printf("%.2f", c);
    } else if ((b > a && a > c) || (b < a && a < c)){
        printf("%.2f", a);
    } else {
        printf("%.2f", a);
    }

    return 0;
}
