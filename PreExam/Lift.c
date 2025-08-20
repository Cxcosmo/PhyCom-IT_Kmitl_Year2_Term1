#include <stdio.h>

int main(){
    int n, age, chid = 0, adult = 0;
    float w_max, w_in, w_sum;

    scanf("%d %f", &n, &w_max);
    for (int i = 0; i < n; i++){
        scanf("%d %f", &age, &w_in);
        w_sum += w_in;
        age < 12 ? chid++ : adult++;
    }
    ((chid && adult) || (!chid)) && w_sum <= w_max ? printf("Safe") : printf("Not Safe");

    return 0;
}
