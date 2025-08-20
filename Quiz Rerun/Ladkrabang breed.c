#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int n;
    double oil[3] = {0, 0, 0}, oil_use[3];
    char name[3][7];

    scanf(" %d", &n);
    scanf("%s %s %s", &name[0], &name[1], &name[2]);
    for (int i = 0; i < n; i++){
        scanf("%lf %lf %lf", &oil_use[0], &oil_use[1], &oil_use[2]);
        oil[0] += oil_use[0];
        oil[1] += oil_use[1];
        oil[2] += oil_use[2];
    }
    for (int j = 0; j < 3; j++){
        !strcmp(name[j], "Nano") ? printf("%s: %d refills\n", name[j], (int)ceil(oil[j] / 6.6)) : printf("%s: %d refills\n", name[j], (int)ceil(oil[j] / 5.5));
    }
}
