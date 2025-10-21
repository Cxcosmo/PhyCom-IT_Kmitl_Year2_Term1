#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct student{
    char name[61];
    char surname[61];
    char sex[5];
    int age;
    char id[13];
    float grade;
};

int main(){
    struct student student[20];
    char sex[7], select[8];

    for (int i = 0; i < 20; i++){
        scanf("%s %s %s %d %s %f", student[i].name, student[i].surname, sex, &student[i].age, student[i].id, &student[i].grade);
        strcpy(student[i].sex, !strcmp(sex, "Male") ? "Mr" : "Miss");
    }
    scanf(" %s", select);
    int a = 0;
    while(select[a] != '\0'){
        select[a] = tolower(select[a]);
        a++;
    }
    for (int j = 0; j < 20; j++){
        struct student student_save = student[j];
        int m = j;
        for (int k = j; k < 20; k++){
            if (!strcmp(select, "name")){
                if (strcmp(student[k].name, student[m].name) < 0){
                    m = k;
                }
            } else if (!strcmp(select, "surname")){
                if (strcmp(student[k].surname, student[m].surname) < 0){
                    m = k;
                }
            } else if (!strcmp(select, "id")){
                if (strcmp(student[k].id, student[m].id) < 0){
                    m = k;
                }
            }
        }
        student[j] = student[m];
        student[m] = student_save;
    }

    for (int j = 0; j < 20; j++){
        printf("%s %.1s %s (%d) ID: %s GPA %.2f\n", student[j].sex, student[j].name, student[j].surname, student[j].age, student[j].id, student[j].grade);
    }

    return 0;
}
