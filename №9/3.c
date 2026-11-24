#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    char symbol;
    int side_s;
    int a;
    int i, j;
    int height;
    int spaces;
    int chars;
    int cont;
    float k;

    printf("Введите символ для отрисовки: ");
    scanf_s(" %c", &symbol);

    printf("Введите сторону s: ");
    scanf_s("%d", &side_s);

    printf("Введите угол alpha в градусах: ");
    scanf_s("%d", &a);

    // коэффициент в зависимости от угла
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

    printf("\nВаш треугольник:\n\n");

    for (i = 0; i < height; i++) {

        // cчитаем пробелы
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

    return 0;
}