#include <stdio.h>

int main(){
    int sec, min = 0, hour = 0, day = 0, s = 0;

    scanf(" %d", &sec);
    s = sec;
    day = sec / (24 * 60 * 60);
    sec %= 24 * 60 * 60;
    hour = sec / (60 * 60);
    sec %= 60 * 60;
    min = sec / 60;
    sec %= 60;
    printf("%d s = %d d %d h %d m %d s", s, day, hour, min, sec);

    return 0;
}
