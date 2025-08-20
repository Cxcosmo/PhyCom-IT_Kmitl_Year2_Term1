#include <stdio.h>

int main(){
    int n, count = 0;
    float hit, field;

    scanf("%d %f", &n, &hit);
    for (int i = 0; i < n; i++){
        scanf(" %f", &field);
        count += hit > field ? 1 : 0;
    }
    printf("%d", count);

    return 0;
}
