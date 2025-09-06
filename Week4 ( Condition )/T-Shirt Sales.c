#include <stdio.h>

int main (){
    int amount, per;
    float cost, pro1, pro2 ;

    scanf("%f %d %d", &cost, &per, &amount);
    pro1 = ((cost - (cost * per / 100)) * amount);
    pro2 = (amount * cost) - ((amount / 3) * cost);
    pro1 <= pro2 ? printf("Discount %d\%\n%.2f", per, pro1) : printf("Buy 2 Get 1\n%.2f", pro2);

    return 0;
}
