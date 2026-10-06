#define _USE_MATH_DEFINES
#include <locale.h>
#include <stdio.h>
#include <math.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");
    double x;
    double c = 1.3;

    printf("¬ведите значение x: ");
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

    printf("x = %.1lf\n", x);
    printf("y = %.1lf\n", y);

    int A = (int)a;
    int B = (int)b;
    int C = (int)y;

    int r_A = ((A % 2 == 0) && (B % 2 != 0)) ||
        ((A % 2 != 0) && (B % 2 == 0));

    int r_B = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);

    printf("”словие (а) выполнено (1 - да, 0 - нет): %d\n", r_A);
    printf("”словие (б) выполнено (1 - да, 0 - нет): %d\n", r_B);
    return 0;
}
