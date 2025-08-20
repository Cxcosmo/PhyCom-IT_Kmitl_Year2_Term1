#include <stdio.h>

int main(){
    double e20, cost[2] = {0, 0};
    int road[4], count[2] = {0, 0};

    scanf(" %lf", &e20);
    for (int i = 0; i < 4; i++){ scanf(" %d", &road[i]); }
    for (int i = 0; i < 4; i++){
        double lose, liters, c;
        scanf(" %lf", &lose);
        if (road[i]){
            liters = 29 / lose;
            count[0]++;
            c = (liters * e20) + 60;
            cost[0] += c;
        } else {
            liters = 25 / lose;
            count[1]++;
            c = liters * e20;
            cost[1] += c;
        }
        printf("Day %d: fuel %.2lf L, cost %.2lf Baht\n", i + 1, liters, c);
    }
    count[0] ? printf("Expressway: %.2lf Baht\n", cost[0] / count[0]) : printf("Expressway: 0.00 Baht\n");
    count[1] ? printf("Romklao: %.2lf Baht", cost[1] / count[1]) : printf("Romklao: 0.00 Baht");

    return 0;
}
