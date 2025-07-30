#include <stdio.h>

int main(){
    char name1[35], name2[35], name3[35];
    double num1, num2, num3;

    scanf("%lf %[^\n]", &num1, &name1);
    scanf("%lf %[^\n]", &num2, &name2);
    scanf("%lf %[^\n]", &num3, &name3);
    if (num1 <= num2 && num1 <= num3){
        printf("%s is Fastest : %.3lf", name1, num1);
    }else if (num2 < num1 && num2 <= num3){
        printf("%s is Fastest : %.3lf", name2, num2);
    }else if (num3 < num1 && num3 < num2){
        printf("%s is Fastest : %.3lf", name3, num3);
    }

    return 0;
}
