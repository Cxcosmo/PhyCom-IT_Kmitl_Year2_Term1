#include <stdio.h>

int main(){
    double road;

    scanf("%lf", &road);
    if (road < 0){
        printf("InValid");
    } else if (road <= 5.032){
        printf("Bangkok");
    } else if (road <= 35.477){
        printf("Samut Prakarn");
    } else if (road <= 52.900){
        printf("Chachoengsao");
    } else if (road <= 58.855){
        printf("Chon Buri");
    } else {
        printf("InValid");
    }

    return 0;
}
