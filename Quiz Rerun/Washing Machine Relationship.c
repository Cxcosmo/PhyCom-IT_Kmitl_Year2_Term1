#include <stdio.h>

int main(){
    int n, hr;
    double blood = 2800;

    scanf(" %d", &n);
    hr =  (n * 30) / 60;

    for (int i = 0; i < hr; i++){
        blood *= 0.98;
    }

    printf("%.2lf\n", 2800 - blood);
    blood < 2800 * 0.70 ? printf("Danger") : printf("Safe");
}
