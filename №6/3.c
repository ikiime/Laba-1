#include <locale.h>
#include <stdio.h>	
#include <math.h>
double d(double x1, double y1, double r1, double x2, double y2, double r2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
int main()
{
    setlocale(LC_CTYPE, "RUS");
    double x1, y1, r1;
    double x2, y2, r2;
    double Y;
    printf("Введите координаты центра и радиус первой окружности(x1,y1,z1): \n");
    scanf_s("%lf %lf %lf", &x1, &y1, &r1);

    printf("Введите координаты центра и радиус второй окружности(x2,y2,z2): \n");
    scanf_s("%lf %lf %lf", &x2, &y2, &r2);

    Y = d(x1, y1, r1, x2, y2, r2);

    if (Y > r1 + r2) {
        printf("Не пересекаются(далеко)\n");
    }
    else if (Y == r1 + r2) {
        printf("Касаются снаружи\n");
    }
    else if (Y < fabs(r1 - r2)) {
        printf("Не пересекаются(одна внутри другой\n");
    }
    else if (Y == fabs(r1 - r2)) {
        printf("Пересекаются");
    }
    return 0;
}

//#include <locale.h>
//#include <stdio.h>	
//#include <math.h>
//double d(double x1, y1, r1, x2, y2, r2)
//int main()
//{
//    setlocale(LC_CTYPE, "RUS");
//    double x1, y1, r1;
//    double x2, y2, r2;
//    printf("Введите координаты центра и радиус первой окружности(x1,y1,z1): \n");
//    scanf_s("%lf %lf %lf", &x1, &y1, &r1);
//
//    printf("Введите координаты центра и радиус второй окружности(x2,y2,z2): \n");
//    scanf_s("%lf %lf %lf", &x2, &y2, &r2);
//
//    double d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
//
//    if (d > r1 + r2) {
//        printf("Не пересекаются(далеко)\n");
//    }
//    else if (d == r1 + r2) {
//        printf("Касаются снаружи\n");
//    }
//    else if (d < fabs(r1 - r2)) {
//        printf("Не пересекаются(одна внутри другой\n");
//    }
//    else if (d == fabs(r1 - r2)) {
//        printf("Пересекаются");
//    }
//    return 0;
//}

