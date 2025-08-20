#include <stdio.h>

int main(){
    char car[2][51];
    int day[2][7], min[2] = {0, 0}, count[2] = {0, 0};

    for (int i = 0; i < 2; i++){
        scanf(" %[^\n]", &car[i]);
        for (int j = 0; j < 7; j++){
            scanf(" %d", &day[i][j]);
        }
    }
    for (int k = 0; k < 7; k++){
        min[0] += day[0][k];
        min[1] += day[1][k];
        if (day[0][k] > day[1][k]){
            count[1]++;
        } else if (day[0][k] < day[1][k]){
            count[0]++;
        }
    }
    printf("%s: %d minutes, average %d minutes/day\n", car[0], min[0], min[0] / 7);
    printf("%s: %d minutes, average %d minutes/day\n", car[1], min[1], min[1] / 7);
    printf("Faster days - %s: %d, %s: %d, Equal: %d", car[0], count[0], car[1], count[1], 7 - (count[0] + count[1]));

    return 0;
}
