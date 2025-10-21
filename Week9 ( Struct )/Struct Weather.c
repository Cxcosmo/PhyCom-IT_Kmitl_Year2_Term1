#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Weather {
    char outlook[9];
    int temperature;
    int humidity;
    char wind;
} Weather;

void playing_decision(struct Weather *w){
    if(!strcmp(w->outlook, "overcast")){
        printf("yes\n");
    } else if (!strcmp(w->outlook, "rain")){
        w->wind == 'F' ? printf("yes\n") : printf("no\n");
    } else if (!strcmp(w->outlook, "sunny")){
        w->humidity > 77.5 ? printf("no\n") : printf("yes\n");
    }
}

int main(){
    int n;
    scanf(" %d", &n);
    struct Weather w;

    for (int i = 0; i < n; i++){
        scanf("%s %d %d %c", w.outlook, &w.temperature, &w.humidity, &w.wind);
        playing_decision(&w);
    }

    return 0;
}
