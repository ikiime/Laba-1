#include <locale.h>
#include <stdio.h>	
#include <math.h>
int main()
{
    setlocale(LC_CTYPE, "RUS");
    double x1, y1, r1;
    double x2, y2, r2;
    printf("Введите координаты центра и радиус первой окружности(x1,y1,z1): \n");
    scanf_s("%lf %lf %lf", &x1, &y1, &r1);

    printf("Введите координаты центра и радиус второй окружности(x2,y2,z2): \n");
    scanf_s("%lf %lf %lf", &x2, &y2, &r2);

    double d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    if (d > r1 + r2) {
        printf("Не пересекаются(далеко)\n");
    }
    else if (d == r1 + r2) {
        printf("Касаются снаружи\n");
    }
    else if (d < fabs(r1 - r2)) {
        printf("Не пересекаются(одна внутри другой\n");
    }
    else if (d == fabs(r1 - r2)) {
        printf("Пересекаются");
    }
    return 0;
}

