#include <stdio.h>

int main(){
    double price, d, h, volume;

    scanf("%lf %lf %lf", &price, &d, &h);
    volume = 3.14159265359 * (d / 2) * (d / 2) * h;
    printf("Volume : %.2lfml\n", volume);
    printf("Baht/ml : %.4lf", price / volume);

    return 0;
}
