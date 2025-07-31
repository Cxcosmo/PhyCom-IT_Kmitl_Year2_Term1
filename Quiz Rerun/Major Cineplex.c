#include <stdio.h>

int main(){
    int age, day, cost;

    scanf("%d %d", &age, &day);
    if (age <= 12){ cost = 120; }
    else if (age >= 13 && age <= 59){ cost = 220; }
    else if (age >= 60){ cost = 140; }
    switch (day){
        case 4:
            cost = 100;
            break;
        case 1:
        case 7:
            cost += 20;
            break;
    }
    printf("Ticket price: %d Baht", cost);

    return 0;
}
