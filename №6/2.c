#include <locale.h>
#include <stdio.h>	
int main()
{
    setlocale(LC_CTYPE, "RUS");
    double x;
    printf("¬ведите значение х: ");
    scanf_s("%lf", &x);
    printf("F(%.2f) = %2f\n", x, (x <= 2) ? (x * x + 4 * x + 5) : (1.0 / x * x + 4 * x + 5));
    return 0;
}