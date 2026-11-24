#include <stdio.h>
#include <locale.h>
#include <math.h>

float area_triangle(float a, float b, float c)   
{
    float p = (a + b + c) / 2.0;                 // полупериметр
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
void draw_triangle(char symbol, int side_s, int a)
{
    int i, j, height, spaces, chars;
    float k;
    if (a <= 30) {
        k = 0.58;
    }
    else if (a <= 45) {
        k = 1.0;
    }
    else if (a <= 60) {
        k = 1.73;
    }
    else {
        k = 2.0;
    }
    height = (int)((side_s / 2.0) * k);

    if (height < 2) {
        height = 2;
    }
    if (height > 25) {
        height = 25;
    }
    for (i = 0; i < height; i++) {
        // считаем пробелы
        spaces = height - i - 1;
        for (j = 0; j < spaces; j++) {
            printf(" ");
        }
        chars = 2 * i + 1;
        if (i == height - 1) {
            chars = side_s;
        }
        for (j = 0; j < chars; j++) {
            printf("%c", symbol);
        }
        printf("\n");
    }
}
int main() {
    setlocale(LC_ALL, "Russian");

    int operation;               
    float a, b, c, s;            
    char symbol;                 
    int side_s, angle;           

    printf("Выберите операцию:\n");
    printf("1 - рассчитать площадь\n");
    printf("2 - вывести определение фигуры\n");
    printf("3 - нарисовать фигуру\n");
    printf("Ваш выбор: ");
    scanf_s("%d", &operation);

    if (operation == 1) {
      
        printf("Введите сторону a: ");
        scanf_s("%f", &a);
        printf("Введите сторону b: ");
        scanf_s("%f", &b);
        printf("Введите сторону c: ");
        scanf_s("%f", &c);
        s = area_triangle(a, b, c);
        if (s > 0)
            printf("Площадь треугольника = %f\n", s);
        else
            printf("Такой треугольник не существует!\n");
    }
    else if (operation == 2) {
        printf("Треугольник - фигура, у которой три стороны и три угла.\n");
        printf("Сумма углов треугольника всегда равна 180 градусам.\n");
    }
    else if (operation == 3) {
        printf("Введите символ для отрисовки: ");
        scanf_s(" %c", &symbol);
        printf("Введите сторону s: ");
        scanf_s("%d", &side_s);
        printf("Введите угол alpha в градусах: ");
        scanf_s("%d", &angle);

        printf("\nВаш треугольник:\n\n");
        draw_triangle(symbol, side_s, angle);
    }
    else {
        printf("Неверный выбор!\n");
    }

    return 0;
}
