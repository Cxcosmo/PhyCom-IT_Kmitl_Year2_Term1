#include <stdio.h>

int main(){
    double m[3][3];

    for (int i = 0; i < 3; i++){
        scanf("%lf %lf %lf", &m[i][0], &m[i][1], &m[i][2]);
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (i != j && m[i][j] != 0){
                printf("This is not a scalar matrix");
                return 0;
            }
        }
    }
    printf("This is a scalar matrix");

    return 0;
}
