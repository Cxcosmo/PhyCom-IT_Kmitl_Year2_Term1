#include <stdio.h>

int main(){
    float bank, money, num;
    int err = 0;
    char x;

    scanf("%f %f", &bank, &money);
    while (err != 3){
        if (scanf(" %c %f", &x, &num) == 1){
            break;
        }
        if (x == 'D'){
            if (money < num){
                err++;
            } else {
                bank += num;
                money -= num;
                err = 0;
            }
        } else if (x == 'W'){
            if (bank < num){
                err++;
            } else {
                money += num;
                bank -= num;
                err = 0;
            }
        }
    }
    printf("%.2f\n", bank);
    printf("%.2f", money);

    return 0;
}
