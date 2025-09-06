#include <stdio.h>

int main(){
    double m1[3][3], m2[3][3], num;

    for (int i = 0; i < 3; i++){
        scanf("%lf %lf %lf", &m1[i][0], &m1[i][1], &m1[i][2]);
    }

    for (int i = 0; i < 3; i++){
        scanf("%lf %lf %lf", &m2[i][0], &m2[i][1], &m2[i][2]);
    }

    printf("A x B\n");

    for (int row = 0; row < 3; row++){
        for (int col = 0; col < 3; col++){
            num = 0;
            for (int i = 0; i < 3; i++){
                num += m1[row][i] * m2[i][col];
            }
            printf("%.2lf ", num);
        }
        printf("\n");
    }

    return 0;
}
