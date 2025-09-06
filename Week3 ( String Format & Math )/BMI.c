#include <stdio.h>

int main(){
    double bmi;
    float height, weight;

    scanf("%f %f", &height, &weight);
    bmi = weight / ((height / 100) * (height / 100));
    printf("%lf", bmi);

    return 0;
}
