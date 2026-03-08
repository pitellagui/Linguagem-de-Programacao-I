#include <stdio.h>
#include <math.h>

int main() {
    
    int num, hours;
    double salaryPerHour;

    scanf("%d %d %lf", &num, &hours, &salaryPerHour);

    double salary = hours * salaryPerHour;  
    
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", num, salary);
    return 0;
}