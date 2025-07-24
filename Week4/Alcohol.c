#include <stdio.h>

int main(){
    char mf, yn;
    float w, cc, al, al_d, m, f;
    int cane, hr;

    scanf("%c %f %c %f %f %d %d", &mf, &w, &yn, &cc, &al, &cane, &hr);
    al_d = ((al * cc) / 100) * cane;
    m = (al_d / (w * 0.68 * 10)) * 1000;
    f = (al_d / (w * 0.55 * 10)) * 1000;
    (((mf == 'M' ? m : f) - (15 * hr)) <= 50) && yn == 'Y' ? printf("Safe") : printf("Not Safe");

    return 0;
} 
