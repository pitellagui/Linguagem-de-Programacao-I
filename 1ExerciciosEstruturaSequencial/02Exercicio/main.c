#include <stdio.h>
#include <math.h>

int main() {
    
    double r; 

    // lf para double
    scanf("%lf", &r);

    // Calculando a area de forma simples e direta
    double area = 3.14159 * pow(r, 2);

    // Calculando a area usando a definição de pi e funcaoa da biblioteca math.h pow
    double pi = acos(-1); 
    double Area = pi * pow(r, 2);
 
    // imprime a area
    printf("Area = %lf\n", area);

    // imprime a area com  casas apos a virgula em formato float
    printf("Area = %.4lf\n", Area);
    return 0;
}