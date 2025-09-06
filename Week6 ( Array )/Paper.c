#include <stdio.h>
#include <math.h>

int main(){
    int size1, size2;

    scanf("A%d A%d", &size1, &size2);
    printf("%d", (int)pow(2, size2 - size1));

    return 0;
}
