#include <stdio.h>

double celsiusToFahrenheit(double Celsius);
double fahrenheitToCelsius(double fahrenheit);
void printFahrenheit(double fahrenheit);
void printCelsius(double Celsius);

int main(){
    char typ; 
    double temp;

    scanf("%lf %c", &temp, &typ);
    typ = typ >= 65 && typ <= 90 ? typ + 32 : typ;
    if (typ == 'c'){
        printFahrenheit(celsiusToFahrenheit(temp));
    } else if (typ == 'f') {
        printCelsius(fahrenheitToCelsius(temp));
    }

    return 0;
}

double celsiusToFahrenheit(double Celsius){
    return 32 + (Celsius * (180.0 / 100.0));
}

double fahrenheitToCelsius(double fahrenheit){
    return (fahrenheit - 32) / (180.0 / 100.0);
}

void printFahrenheit(double fahrenheit){
    printf("%.2lf f", fahrenheit);
}

void printCelsius(double Celsius){
    printf("%.2lf c", Celsius);
}
