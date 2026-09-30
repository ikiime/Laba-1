#include <locale.h>
#include <stdio.h>	
int main()
{
	setlocale(LC_CTYPE, "RUS");
	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;
	printf("Начальные значения:\n");
	printf("char c = '!'\n");
	printf("int i = 2\n");
	printf("float f = %f\n");
	printf("double d = 5e-12\n");
	puts("Введите с:");
	scanf("	%c", &c);
	puts("Введите i:");
	scanf("%d", &i);
	puts("Введите f:");
	scanf("%f", &f);
	puts("Введите d:");
	scanf("%lf", &d);

	printf("\nВведённые значения:\n");
	printf("char c = %c\n", c);
	printf("int i = %d\n", i);
	printf("float f = %2.2f\n", f);
	printf("double d = %2.2lf\n", d);

	// Задача 1.а
	printf("\nЦелая часть d: %d\n", (int)d);
	printf("Дробная часть d: %lf\n", d - (int)d);
	// Задача 1.б
	printf("\nКод символа в десятичной системе: %d\n", c);
	printf("Код символа в шестнадцатеричной системе: %X\n", c);
	//Задача 1.в
	if (i != 0) {
		printf("\n1 / i = %lf\n", 1.0 / i);
	}
	else {
		printf("\nНа ноль делить нельзя\n");
	}
	return 0;
}