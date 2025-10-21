#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Record {
    char id[10];
    char name[100];
    long salary;
    long sales;
} Record;

int main(){
    int n;
    scanf(" %d", &n);

    Record people[n];
    for (int i = 0; i < n; i++){
        scanf("%s %s %ld %ld", people[i].id, people[i].name, &people[i].salary, &people[i].sales);
    }

    char id[10];
    scanf(" %s", id);

    for (int j = 0; j < n; j++){
        if (!strcmp(id, people[j].id)){
            printf("%s\n", people[j].id);
            printf("%s\n", people[j].name);
            printf("%ld\n", people[j].sales);
            float commission = people[j].sales * 0.02;
            printf("%.2lf\n", commission);
            printf("%ld\n", people[j].salary);
            printf("%.2lf", commission + people[j].salary);

            return 0;
        }
    }

    printf("ID not found !!!");
    return 0;
}
