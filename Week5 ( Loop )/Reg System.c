#include <stdio.h>

int main(){
    float h, w, h_sum = 0, w_sum = 0;
    int age, age_sum = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0;

    for (int i = 1; i <= 50; i++){
        scanf("%d %f %f", &age, &h, &w);
        if (age >= 20 && h >= 160){
            ++c1;
        }
        if (age < 20 && (h <= 180 || w >= 60)){
            ++c2;
        }
        if (age >= 30 && w >= 40 && w <= 80){
            ++c3;
        } 
        if (age < 40 && (w < 85 || h <= 200)){
            ++c4;
        }
        age_sum += age;
        h_sum += h;
        w_sum += w;
    }
    printf("Age >= 20 and Height >= 160: %d\n", c1);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", c2);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", c3);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", c4);
    printf("Average Age: %d\n", age_sum / 50);
    printf("Average Height: %.2f\n", h_sum / 50);
    printf("Average Weight: %.2f", w_sum / 50);

    return 0;
}
