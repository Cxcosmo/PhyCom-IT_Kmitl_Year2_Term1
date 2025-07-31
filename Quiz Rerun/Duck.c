#include <stdio.h>

int main(){
    int d;

    scanf("%d ", &d);
    if (d == 0){
        printf("Duck Type: Silent Duck");
    } else if (d >= 1 && d <= 10){
        printf("Duck Type: Chill Duck");
    } else if (d >= 11 && d <= 50){
        printf("Duck Type: Happy Duck");
    } else if (d > 50){
        printf("Duck Type: Talkative Duck");
    } else {
        printf("Error");
    }

    return 0;
}
