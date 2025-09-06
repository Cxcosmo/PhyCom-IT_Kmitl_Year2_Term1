#include <stdio.h>
#include <math.h>

int main(){
    int d, u;
    double h;

    scanf("%d %d", &d, &u);
    printf("theta (degree) : %d\n", d);
    printf("u (m/s) : %d\n", u);
    printf("h (m) : %.4lf", (pow(u, 2) * pow(sin((d * 3.141592653589793) / 180), 2)) / (2 * 9.81));

    return 0;
}
