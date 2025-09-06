#include <stdio.h>
#include <math.h>

double perimeter(double a, double b);
double area(double a, double b);

double main(){
    double a, b;

    scanf("%lf %lf", &a, &b);
    printf("Perimeter: %.2lf\n", perimeter(a, b));
    printf("Area: %.2lf", area(a, b));

    return 0;
}

double perimeter(double a, double b){
    return a + b + (sqrt(pow(a, 2) + pow(b, 2)));
}

double area(double a, double b){
    return (1.0 / 2) * a * b;
}
