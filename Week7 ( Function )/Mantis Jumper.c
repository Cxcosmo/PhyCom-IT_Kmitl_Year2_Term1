#include <stdio.h>
#include <math.h>

long fibonacci(long n);

int main(){
    long n;

    scanf(" %ld", &n);
    printf("method = %ld", fibonacci(n));

    return 0;
}

long fibonacci(long n){
    if (n <= 1){ return 1; }
    return fibonacci(n - 2) + fibonacci(n - 1);
}
