#include <locale.h>
#include <stdio.h>	
#include "math.h"
#include "stdlib.h"
int condition(int A, int B, int C)
{
    return (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);
}
void main(void)
{
    setlocale(LC_CTYPE, "RUS");
    int A, B, C;
    int result;

    printf("=== Система калибровки станка ===\n");
    printf("Введите целое число А: ");
    scanf_s("%d", &A);
    printf("Введите целое число B: ");
    scanf_s("%d", &B);
    printf("Введите целое число C: ");
    scanf_s("%d", &C);
    result = condition(A, B, C);

    printf("Калибровка успешна (1 - да, 0 - нет): %d\n", result);
    system("pause");
}
//#include <locale.h>
//#include <stdio.h>	
//
//int main() 
//{
//    setlocale(LC_CTYPE, "RUS");
//    int A, B, C;
//    int condition;
//
//    printf("=== Система калибровки станка ===\n");
//    printf("Введите целое число А: ");
//    scanf("%d", &A);
//    printf("Введите целое число B: ");
//    scanf("%d", &B);
//    printf("Введите целое число C: ");
//    scanf("%d", &C);
//    condition = ((A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0));
//
//    printf("Калибровка успешна (1 - да, 0 - нет): %d\n", condition);
//    return 0;
//}
