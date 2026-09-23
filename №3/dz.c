#include <locale.h>
#include <stdio.h>	
#define R 13.7
int main() 
{
    setlocale(LC_CTYPE, "RUS");
    float phi;
    float area;

    printf("Введите угол в радианах: ");
    scanf("%f", &phi);

    area = 0.5 * R * R * phi;

    printf("Радиус = %.1f\n", R);
    printf("Угол = %.2f радиан\n", phi);
    printf("Площадь сектора = %.2f\n", area);

    return 0;
}
