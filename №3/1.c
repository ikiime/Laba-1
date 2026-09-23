#include <locale.h>
#include <stdio.h>	
int main()
{
	setlocale(LC_CTYPE, "RUS");
	int num1;
	int num2;
	puts("введите число 1:");
	scanf("%d", &num1);
	puts("введите число 2:");
	scanf("%d", &num2);
	printf("Введено число %d\n", num1);
	printf("Введено число %d\n", num2);
	printf("Сумма: %d + %d = %d\n", num1, num2, num1 + num2);
	printf("Разнсть: %d / %d = %d\n", num1, num2, num1 / num2);
	printf("Произведение: %d * %d = %d\n", num1, num2, num1 * num2);
	printf("Частное: %d / %d =%1.2f\n", num2, num1, num2 * 1.0 / num1 * 1.0);
	printf("Остаток: %d %% %d = %d\n", num2, num1, num2 % num1);
	return 0;
}