#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Russian");
    
    /*tan(x) = x + x ^ 3 / 3 + 2x ^ 5 / 15 + 17x ^ 7 / 315 + 62x ^ 9 / 2835 */
    double a0 = 1.0;
    double a1 = 1.0 / 3.0;
    double a2 = 2.0 / 15.0;
    double a3 = 17.0 / 315.0;
    double a4 = 62.0 / 2835.0;

    double x, eps, px, term;
    double sum_N, sum_eps;
    int N;

    printf("Введите x (|x| < pi/2): ");
    scanf_s("%lf", &x);

    printf("Введите число членов ряда N (от 1 до 5): ");
    scanf_s("%d", &N);

    printf("Введите точность eps: ");
    scanf_s("%lf", &eps);

    /* 2) Сумма первых N членов ряда */
    px = x;                 /* px - текущая степень: x, x^3, x^5 ... */
    sum_N = 0.0;

    if (N >= 1) sum_N += a0 * px;
    if (N >= 2) { px *= x * x; sum_N += a1 * px; }
    if (N >= 3) { px *= x * x; sum_N += a2 * px; }
    if (N >= 4) { px *= x * x; sum_N += a3 * px; }
    if (N >= 5) { px *= x * x; sum_N += a4 * px; }

    /* 3) Ряд до заданной точности eps */
    px = x;
    sum_eps = a0 * px;      

    px *= x * x;  term = a1 * px;
    if (fabs(term) >= eps) { sum_eps += term; }

    px *= x * x;  term = a2 * px;
    if (fabs(term) >= eps) { sum_eps += term; }

    px *= x * x;  term = a3 * px;
    if (fabs(term) >= eps) { sum_eps += term; }

    px *= x * x;  term = a4 * px;
    if (fabs(term) >= eps) { sum_eps += term; }

    printf("\ntan(x) стандартная функция = %15.10f\n", tan(x));
    printf("tan(x) сумма N членов      = %15.10f\n", sum_N);
    printf("tan(x) ряд с точностью eps = %15.10f\n", sum_eps);

    return 0;
}

