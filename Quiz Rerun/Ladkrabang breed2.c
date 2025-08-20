#include <stdio.h>
#include <math.h>
#include <string.h>
  
int main(){
    long n;
    char name[7];
    double oil = 0, oil_in;
 
    scanf("%ld %s", &n, &name);
    for (int i = 0; i < n; i++){
        scanf(" %lf", &oil_in);
        oil += oil_in;
    }
 
    if (!strcmp(name, "Nano")){
        printf("%s: %.0lf refills.\n", name, ceil(oil / 6.6));
    }else if (!strcmp(name, "Mickey")){
        printf("%s: %.0lf refills.\n", name, ceil(oil / 5.5));
    }else if (!strcmp(name, "Copter")){
        printf("%s: %.0lf refills.\n", name, ceil(oil / 4.4));
    }
 
    return 0;
}