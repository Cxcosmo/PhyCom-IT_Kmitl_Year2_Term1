#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    char name[61];
    char surname[61];
    char sex[7];
    int age;
    char id[13];
    float grade;
};

int main(){
    struct student s;
    char sex[5];

    scanf("%s %s %s %d %s %f", s.name, s.surname, s.sex, &s.age, s.id, &s.grade);
    strcpy(sex, !strcmp(s.sex, "Male") ? "Mr" : "Miss");
    printf("%s %.1s %s (%d) ID: %s GPA %.2f", sex, s.name, s.surname, s.age, s.id, s.grade);

    return 0;
}
