#include <stdio.h>
#include <math.h>
#include <locale.h>

/* F1(x) = x^2 - 3x + 9, если x <= 3
          1 / (x^3 + 3),  если x > 3  */
double fa(double x)
{
    double y;
    if (x <= 3)
        y = x * x - 3 * x + 9;
    else
        y = 1.0 / (x * x * x + 3);
    return y;
}

/* F2(x) = x * e^(sin(x^2)) */
double fb(double x)
{
    double y;
    y = x * exp(sin(x * x));
    return y;
}

int main(void)
{
    setlocale(LC_ALL, "Russian");
    double x;
    int choice;

    printf("Введите x: ");
    scanf_s("%lf", &x);

    printf("fa(x)=%lf, fb(x)=%lf\n", fa(x), fb(x)); //Вывод значений функций
    printf("%lf %lf %lf\n", fa(x) * fb(x), 
        fa(x) * fa(x) - fb(x) * fb(x),
        2.0 * (fa(x) + fb(x))); // Вывод произведения, разности квадратов и удвоенной суммы 

    printf("\nМеню:\n");
    printf("1 - значение fa(x)\n");
    printf("2 - значение fb(x)\n");
    printf("3 - произведение\n");
    printf("4 - разность квадратов\n");
    printf("5 - удвоенная сумма\n");
    printf("Ваш выбор: ");
    scanf_s("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("fa(x) = %lf\n", fa(x));
        break;
    case 2:
        printf("fb(x) = %lf\n", fb(x));
        break;
    case 3:
        printf("Произведение = %lf\n", fa(x) * fb(x));
        break;
    case 4:
        printf("Разность квадратов = %lf\n", fa(x) * fa(x) - fb(x) * fb(x));
        break;
    case 5:
        printf("Удвоенная сумма = %lf\n", 2.0 * (fa(x) + fb(x)));
        break;
    default:
        printf("Неверный выбор!\n");
    }

    return 0;
}
