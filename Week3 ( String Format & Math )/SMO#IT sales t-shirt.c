#include <stdio.h>

int main(){
    double price, percentage;
    int amount;

    scanf("%lf %lf %d", &price, &percentage, &amount);
    printf("%.2lf", price * ((100 - percentage) / 100.0) * amount);
    
    return 0;
}
