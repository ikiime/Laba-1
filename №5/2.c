#define _USE_MATH_DEFINES 
#include <locale.h>
#include <stdio.h>	
#include <math.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");
    double x;
    double c = 1.3;

    printf("Введите значение x: ");
    scanf_s("%lf", &x);
    double y1 = exp(x);
    double a1 = pow(c, 3);
    double a2 = log(fabs(x));
    double a = a1 + a2;
    double b1 = pow(a, 2);
    double b2 = sqrt(c);
    double b = b1 + b2;
    double y2 = pow(5.8, -b);
    double y = y1 + y2;
    printf("x = %2.1lf\n", x);
    printf("y = %2.1lf", y);
    //printf("Значение b = %2.1lf\n", b);
    //printf("Значение a = %2.1lf\n", a);
    return 0;
}