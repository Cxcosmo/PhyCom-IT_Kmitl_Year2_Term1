#include <stdio.h>

int main(){
    char info[40];
    int g1, g2, g3, g4, g5, g6;

    scanf("%[^\n] %d %d %d %d %d %d", &info, &g1, &g2, &g3, &g4, &g5, &g6);
    printf("Grade announcement 1/2568: %s\n", info);
    printf("GPS/GPA: %.2f", 3.00 * (g1 + g2 + g3 + g4 + g5 + g6) / 18);

    return 0;
}
