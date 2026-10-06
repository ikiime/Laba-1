#define _USE_MATH_DEFINES 
#include <locale.h>
#include <stdio.h>	
#include <math.h>
#define M_PI 3.14159265358979323846

int main(void)
{
    setlocale(LC_CTYPE, "RUS");
    double gr;       
    double rad;      
    double result;  

    printf("¬ведите угол в градусах: ");
    scanf("%lf", &gr);

    rad = gr * M_PI / 180.0;
    result = sin(rad);

    printf("sin(%.2lf град.) = %.6lf\n", gr, result);
    return 0;
}