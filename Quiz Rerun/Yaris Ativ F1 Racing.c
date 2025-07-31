#include <stdio.h>

int main(){
    int s, r, sc, err = 0;
    float t;

    scanf("%d %f %d %d", &s, &t, &r, &sc);
    if (s == 0){ err++; }
    if (t >= 1){ err++; }
    if (r - sc < 2){ err++; }
    if (r <= 2){ err++; }
    err == 0 ? printf("DRS allowed") : printf("DRS not allowed %d", err);

    return 0;
}
