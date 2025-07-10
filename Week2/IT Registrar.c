#include <stdio.h>

int main() {
    char name[30];
    char surname[30];
    char id[9];
    int day, month, year;
    float gpa;

    scanf("%s %s %s", name, surname, id);
    scanf("%d/%d/%d", &day, &month, &year);
    scanf("%f", &gpa);
    printf("Fullname: %s %s\n", name, surname);
    printf("ID: %s\n", id);
    printf("DOB: %02d-%02d-%04d\n", day, month, year);
    printf("GPA: %.2f\n", gpa);

    return 0;
}
